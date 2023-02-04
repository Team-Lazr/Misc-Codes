#include <Keypad.h>

const byte ROWS = 3; 
const byte COLS = 3; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'}
};

byte rowPins[ROWS] = {22, 23, 24}; 
byte colPins[COLS] = {25, 26, 27}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 



int uel = 32;
int uml = 34;
int umr = 36;
int uer = 38;
int lel = 42;
int lml = 44;
int lmr = 46;



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





void setup(){
  Serial.begin(9600);

  pinMode(uel,OUTPUT);
 pinMode(uml,OUTPUT);
 pinMode(umr,OUTPUT);
 pinMode(uer,OUTPUT);
 pinMode(lel,OUTPUT);
 pinMode(lml,OUTPUT);
 pinMode(lmr,OUTPUT);
   
}
  
void loop(){


  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
   
   switch(customKey)
 {

case '9':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a9[i]);
  }delay(1000);


 }
 break;
case '8':
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a8[i]);
  }delay(1000);
}
break;


case '7':
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a7[i]);
  }
delay(1000);

 }
 break;
case '6':
{
for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a6[i]);
  }
delay(1000);

 }
 break;
case '5':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a5[i]);
  }delay(1000);


 }
 break;
case '4':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a4[i]);
  }delay(1000);


 }
 break;
case '3':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a3[i]);
  }delay(1000);


 }
 break;
case '2':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a2[i]);
  }delay(1000);


 }
 break;
case '1':
{
  for(int i=0;i<7;i++)
 {
  digitalWrite(pin[i],a1[i]);
  }delay(1000);


 }
 break;
case '0':
{
  for(int i=0;i<7;i++)

 {
  digitalWrite(pin[i],a0[i]);
  }delay(1000);
}

 
 break;
 default :
 {
 for(int i=0;i<7;i++)

 {
  digitalWrite(pin[i],dash[i]);
  }
  }delay(1000);
  
  
}
  }
  }
