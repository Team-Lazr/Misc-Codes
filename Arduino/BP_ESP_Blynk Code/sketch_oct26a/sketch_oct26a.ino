#define BLYNK_TEMPLATE_ID "TMPLACZSNh5W"
#define BLYNK_DEVICE_NAME "IIoT"
#define BLYNK_AUTH_TOKEN  "YV7Og1Xi8jKBVc4o41d4fnA4M6LJ-Ag0"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "BLEDevice.h"
char sbuffer[10], ch;
unsigned char pos;
unsigned char read1, read2, read3;
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Stark Tower 2GHz";
char pass[] = "R3J3TDHgdF";
int sw = 16;
int bpm=0;
int spo2=0;
static BLEUUID serviceUUID("49535343-fe7d-4ae5-8fa9-9fafd205e455");
static BLEUUID    charUUID("49535343-1e4d-4bd9-ba61-23c647249616");
static boolean doConnect = false;
static boolean connected = false;
static boolean doScan = false;
static BLERemoteCharacteristic* pRemoteCharacteristic;
static BLEAdvertisedDevice* myDevice;
static void notifyCallback(
  BLERemoteCharacteristic* pBLERemoteCharacteristic,
  uint8_t* pData,
  size_t length,
  bool isNotify) {
  bpm=pData[18];
  spo2=pData[19];
}
class MyClientCallback : public BLEClientCallbacks {
  void onConnect(BLEClient* pclient) {
  }

  void onDisconnect(BLEClient* pclient) {
    connected = false;
  }
};

bool connectToServer() {
    
    BLEClient*  pClient  = BLEDevice::createClient();
    pClient->setClientCallbacks(new MyClientCallback());
    pClient->connect(myDevice);  
    BLERemoteService* pRemoteService = pClient->getService(serviceUUID);
    if (pRemoteService == nullptr) {
      pClient->disconnect();
      return false;
    }
    pRemoteCharacteristic = pRemoteService->getCharacteristic(charUUID);
    if (pRemoteCharacteristic == nullptr) {
      pClient->disconnect();
      return false;
    }
    if(pRemoteCharacteristic->canRead()) {
      std::string value = pRemoteCharacteristic->readValue();
    }

    if(pRemoteCharacteristic->canNotify())
      pRemoteCharacteristic->registerForNotify(notifyCallback);

    connected = true;
}

class MyAdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
 
  void onResult(BLEAdvertisedDevice advertisedDevice) {

    if (advertisedDevice.haveServiceUUID() && advertisedDevice.isAdvertisingService(serviceUUID)) {

      BLEDevice::getScan()->stop();
      myDevice = new BLEAdvertisedDevice(advertisedDevice);
      doConnect = true;
      doScan = true;

    } 
  } 
}; 


char mygetchar(void)
{ 
 while (!Serial.available());
 return Serial.read();
}


void readBP()
{
  while(true)
{
  ch = mygetchar(); 
  if(ch==0x0A) 
  {
     pos = 0; 
     read1 = ((sbuffer[1]-'0')*100) + ((sbuffer[2]-'0')*10) +(sbuffer[3]-'0');
     read2 = ((sbuffer[6]-'0')*100) + ((sbuffer[7]-'0')*10) +(sbuffer[8]-'0');
     Blynk.virtualWrite(V1,(int)read1);
     Blynk.virtualWrite(V2,(int)read2);
     break;
  } 
  else 
  { 
     sbuffer[pos] = ch;
     pos++;
  } 
} 
}



void setup() {
  Serial.begin(115200);
  pinMode(sw,OUTPUT);
  digitalWrite(sw,HIGH);
  Blynk.begin(auth, ssid, pass);
  BLEDevice::init("");
  BLEScan* pBLEScan = BLEDevice::getScan();
  pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  pBLEScan->setInterval(1349);
  pBLEScan->setWindow(449);
  pBLEScan->setActiveScan(true);
  pBLEScan->start(5, false);
}
void loop() {

  if (doConnect == true) {
    if (connectToServer()) {
    } else {
    }
    doConnect = false;
  }

  if (connected) {
    String newValue = "Time since boot: " + String(millis()/1000);
    pRemoteCharacteristic->writeValue(newValue.c_str(), newValue.length());
  }else if(doScan){
    BLEDevice::getScan()->start(0);
  }


//PUT YOUR CODE HERE

  
  if(bpm!=127&&spo2!=127)
  {
    Blynk.virtualWrite(V4,bpm);
    Blynk.virtualWrite(V5,spo2);
  }
  

  digitalWrite(sw,LOW);
  delay(500);   
  digitalWrite(sw,HIGH);
  readBP();
  Blynk.run();
  digitalWrite(sw,LOW);
  delay(500);   
  digitalWrite(sw,HIGH);
  

  
  delay(30000);
}
