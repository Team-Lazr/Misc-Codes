void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
}


void loop() 
{
  digitalWrite(3, HIGH);  
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(3, HIGH);
    digitalWrite(11,HIGH);
    for(int i=255;i>=0;i--)
  {
    analogWrite(10,i);
    delay(50);
  }
   for(int i=255;i>=0;i--)
  {
    analogWrite(11,i);
    delay(50);
  }
   

for(int i=0;i<=255;i++)
  {
    analogWrite(11,i);
    delay(50);
  }
  delay(1000);
  }
