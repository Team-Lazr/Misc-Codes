// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID "TMPLACZSNh5W"
#define BLYNK_DEVICE_NAME "IIoT"
#define BLYNK_AUTH_TOKEN  "YV7Og1Xi8jKBVc4o41d4fnA4M6LJ-Ag0"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OP7";
char pass[] = "00000000";
const int analogInPin = A0; 
int ecg=0;
int lop =12 ;
int lom =14 ;
//char data_IN =A0 ;
BlynkTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.

void setup()
{
  // Debug console
  Serial.begin(115200);
  pinMode(lop, INPUT); // Setup for leads off detection LO +
  pinMode(lom, INPUT); // Setup for leads off detection LO -
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
}

void loop()
{  
  
  if((digitalRead(lop) == 1)||(digitalRead(lom) == 1))
  {
    Serial.println("Leads OFF!");
  }
  
  else
  {
    // send the value of analog input 0:
    ecg=analogRead(analogInPin);
    Serial.println(ecg);
  }
  //Wait for a bit to keep serial data from saturating
  Blynk.virtualWrite(V0, ecg);
  Blynk.run();
  delay(10);
}
