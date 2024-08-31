
#define BLYNK_TEMPLATE_ID "TMPLACZSNh5W"
#define BLYNK_DEVICE_NAME "IIoT"
#define BLYNK_AUTH_TOKEN  "YV7Og1Xi8jKBVc4o41d4fnA4M6LJ-Ag0"
#define BLYNK_PRINT Serial

//ESP8266
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//ESP32
//#include <WiFi.h>
//#include <WiFiClient.h>
//#include <BlynkSimpleEsp32.h>

int sw = 16;

char sbuffer[30], ch;
unsigned char pos;
unsigned char read1, read2, read3;
int starttime=0;
int currenttime=0;
int diffintime=0;

char auth[] = BLYNK_AUTH_TOKEN;
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OP7";
char pass[] = "00000000";

int starttime=0;
int currenttime=0;
int currtime=0;

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(sw,OUTPUT);
  digitalWrite(sw,HIGH);
  Blynk.begin(auth, ssid, pass);
  starttime=millis();
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
}
char mygetchar(void)
{ //receive serial character from sensor (blocking while nothing received)
  Serial.print("mygetchar called");
 while (!Serial.available());
 Serial.println("Returning Value");
 return Serial.read();
}

void readBP()
{
  while(true)
{
  Serial.println("Reading BP");
  ch = mygetchar(); //loop till character received
  Serial.print(ch);
  if(ch==0x0A) // if received character is , 0x0A, 10 then process buffer
  {
    Serial.println("Processing Buffer");
    Serial.println(sbuffer);
     pos = 0; // buffer position reset for next reading

     // extract data from serial buffer to 8 bit integer value
     // convert data from ASCII to decimal
     read1 = ((sbuffer[1]-'0')*100) + ((sbuffer[2]-'0')*10) +(sbuffer[3]-'0');
     read2 = ((sbuffer[6]-'0')*100) + ((sbuffer[7]-'0')*10) +(sbuffer[8]-'0');
     read3 = ((sbuffer[11]-'0')*100) + ((sbuffer[12]-'0')*10) +(sbuffer[13]-'0');

     // Do whatever you wish to do with this sensor integer variables
     // Show on LCD or Do some action as per your application
     // Value of variables will be between 0-255

     // example: send demo output to serial monitor on "Serial"
     Serial.println("Sending Data");
     Serial.print(read1);
     Serial.print('\t');
     Serial.println((int)read1);
     Blynk.virtualWrite(V1,(int)read1);
     Serial.print(read2);
     Serial.print('\t');
     Blynk.virtualWrite(V2,(int)read2);
     Serial.println((int)read2);
     Serial.print(read3);
     Serial.print('\t');
     Blynk.virtualWrite(V3,(int)read3);
     Serial.println((int)read3);
     Serial.println();
     Serial.println(sbuffer);
     break;
  } 
  else 
  { //store serial data to buffer
     sbuffer[pos] = ch;
     pos++;
  } 
} 
}

void loop()
{
  currenttime=millis();
  diffintime=(currenttime-starttime);
//  Serial.println("Loop Started");
if(diffintime>30000)
  {
    starttime=millis();
    digitalWrite(sw,LOW);
    delay(500);   
    digitalWrite(sw,HIGH);
//    Serial.println("Pin Triggered ON");
    readBP();
//    Serial.println("Read BP Called");  
    Blynk.run();
//    Serial.println("Blynk Run Called");
    digitalWrite(sw,LOW);
    delay(500);   
    digitalWrite(sw,HIGH);
//    Serial.println("Pin Triggered OFF");
  }
  
}
