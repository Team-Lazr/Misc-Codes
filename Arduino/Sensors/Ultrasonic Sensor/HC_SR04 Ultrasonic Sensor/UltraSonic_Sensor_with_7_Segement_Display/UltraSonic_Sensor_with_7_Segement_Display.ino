// defines pins numbers
const int trigPin = 13;
const int echoPin = 12;


// defines variables
long duration;
int distance;
int uel = 22;
int uml = 24;
int umr = 26;
int uer = 28;
int lel = 32;
int lml = 42;
int lmr = 36;


int pin[]={uel,uml,umr,uer,lel,lml,lmr};
int a9[]={1,1,1,1,1,0,1};
int a8[]={1,1,1,1,1,1,1};
int a7[]={0,0,1,1,0,0,1};
int a6[]={1,1,1,0,1,1,1};
int a5[]={1,1,1,0,1,0,1};
int a4[]={1,1,0,1,0,0,1};
int a3[]={1,0,1,1,1,0,1};
int a2[]={1,0,1,1,1,1,0};
int a1[]={0,0,0,1,0,0,1};
int a0[]={0,1,1,1,1,1,1};
int dash[]={1,0,0,0,0,0,0};


void setup() 
{
  
pinMode(uel,OUTPUT);
 pinMode(uml,OUTPUT);
 pinMode(umr,OUTPUT);
 pinMode(uer,OUTPUT);
 pinMode(lel,OUTPUT);
 pinMode(lml,OUTPUT);
 pinMode(lmr,OUTPUT);


 
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}


void loop() 
{

  
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);


// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);


// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

delay(100);

 Serial.print("Distance: ");
Serial.println(distance);
if(distance<10&&distance>0)
{

 
  switch(distance)
  {
  

case 9:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a9[i]);
  }


 }
 break;
case 8:
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a8[i]);
  }
}
break;


 break;
case 7:
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a7[i]);
  }


 }
 break;
case 6:
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a6[i]);
  }


 }
 break;
case 5:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a5[i]);
  }


 }
 break;
case 4:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a4[i]);
  }


 }
 break;
case 3:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a3[i]);
  }


 }
 break;
case 2:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a2[i]);
  }


 }
 break;
case 1:
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a1[i]);
  }


 }
 break;
case 0:
{
  for(int i=0;i<7;i++)

 {
  digitalWrite(pin[i],a0[i]);
  }
}

 
 break;
 default :
 {
 for(int i=0;i<7;i++)

 {
  digitalWrite(pin[i],dash[i]);
  }
  }
  
  
}
  }



}
