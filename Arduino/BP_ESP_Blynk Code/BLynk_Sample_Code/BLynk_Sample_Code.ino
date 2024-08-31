//#include <Blynk.h>

/*************************************************************

  This example shows how value can be pushed from Arduino to
  the Blynk App.

  NOTE:
  BlynkTimer provides SimpleTimer functionality:
    http://playground.arduino.cc/Code/SimpleTimer

  App project setup:
    Value Display widget attached to Virtual Pin V5
 *************************************************************/

// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLACZSNh5W"
#define BLYNK_DEVICE_NAME           "IIoT"
#define BLYNK_AUTH_TOKEN            "YV7Og1Xi8jKBVc4o41d4fnA4M6LJ-Ag0"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <ESP32WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OP7";
char pass[] = "00000000";

BlynkTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
//void myTimerEvent()
//{
//  // You can send any value at any time.
//  // Please don't send more that 10 values per second.
//  int randNumber=random(0, 20);
//  Blynk.virtualWrite(V0, randNumber);
//}

void setup()
{
//  int randNumber=0;
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
//  timer.setInterval(1000L, myTimerEvent);
}

void loop()
{
  int randNumber=random(0, 5);
  Serial.println(randNumber);
  Blynk.virtualWrite(V0, randNumber);
  Blynk.run();
  randNumber=random(0, 15);
  Serial.println(randNumber);
  Blynk.virtualWrite(V0, randNumber);
  Blynk.run();
  randNumber=random(20, 30);
  Serial.println(randNumber);
  Blynk.virtualWrite(V0, randNumber);
  Blynk.run();
  randNumber=random(0, 5);
  Serial.println(randNumber);
  Blynk.virtualWrite(V0, randNumber);
  Blynk.run();
  delay(100);
  
//  timer.run(); // Initiates BlynkTimer
}
