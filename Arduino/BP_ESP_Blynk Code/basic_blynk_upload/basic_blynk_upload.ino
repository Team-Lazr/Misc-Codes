#define BLYNK_TEMPLATE_ID "TMPLP9nFubLk"
#define BLYNK_DEVICE_NAME "SMART PARKING MANAGEMENT SYSTEM"
#define BLYNK_AUTH_TOKEN "gTK4-VdC4IYMa3nZ5zd4Nr7pij16Gm-B"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "OP7";
char pass[] = "00000000";

int i=0;

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.virtualWrite(V0,i);
  Serial.print("Value Updated to ");
  Serial.println(i);
  i++;
  Blynk.run();
  if(i==3)
  {
    i=0;
    }
  delay(10);
}
