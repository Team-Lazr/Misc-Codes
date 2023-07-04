int uel = 13;
int uml = 12;
int umr = 11;
int uer = 10;
int lel = 9;
int lml = 8;
int lmr = 7;
int ler = 6;

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
 pinMode(ler,OUTPUT);

}

  


void loop() {
for(int j=0;j<=10;j++)
{
 switch(j)
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
delay(1000);
 }
}
