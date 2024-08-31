int inputPin = 2;
int RelayPin = 10;
int pirState = LOW;
int relayState = LOW;
int val = 0;
int Rled = 7;
int Gled = 6;



void setup() 
{
  pinMode(inputPin,INPUT);
  pinMode(RelayPin,OUTPUT);
  pinMode(Rled,OUTPUT);
  pinMode(Gled,OUTPUT);
  digitalWrite(Rled,HIGH);
  digitalWrite(Gled,LOW);
  digitalWrite(RelayPin,HIGH);
  Serial.begin(9600);
}

void loop() 
{
  val = digitalRead(inputPin);
  if(val == HIGH)
  {
    digitalWrite(Gled,HIGH);
    digitalWrite(Rled,LOW);
    if(pirState == LOW)
    {
      Serial.println("Motion Detected");
      pirState = HIGH;
    }
    if(relayState == LOW)
      {
        relayState = HIGH;
        digitalWrite(RelayPin,LOW);
      }
      //delay(500);
   
  }
  if(val == LOW)
  {
    digitalWrite(Rled,HIGH);
    digitalWrite(Gled,LOW);
    if(pirState == HIGH)
    {
      Serial.println("No Motion Detected");
      pirState = LOW;      
    }
     if(relayState == HIGH)
      {
        relayState = LOW;
        digitalWrite(RelayPin,HIGH);
      }
   
  }
   

}
