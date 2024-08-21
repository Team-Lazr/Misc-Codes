void setup()
{
    pinMode(12,INPUT);
    pinMode(2,OUTPUT);
    
     pinMode(3,OUTPUT);

  pinMode(4,OUTPUT);

  pinMode(6,OUTPUT);

  pinMode(7,OUTPUT);

  pinMode(9,OUTPUT);

  pinMode(10,OUTPUT);

  pinMode(11,OUTPUT);


    Serial.begin(9600); 
   
}
  int x;
  int a=1;
  int b=1;
  int i=0;
void loop() 
{
 
if(i>=10)
{
  digitalWrite(2,HIGH);
  i=0;
}
  
    x=digitalRead(12);
    a=digitalRead(12);
    Serial.print(x);
    
    

if(a==1&&b==0)
{
  i++;
}
int t=a;
a=b;
b=t;
   
switch(i)
  {
    

  case 9:
  {
    //9
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);

  
  }
  break;

  case 8:
  {
     //8
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);

  }
  break;


  case 7:
  {
    //7
 digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  }
  break;

  
  case 6:
  {
     //6
 digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }
  break;

    case 5:
  {
     //5
 digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }
  break;

    case 4:
  {
     //4
 digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  }
  break;

    case 3:
  {
     //3
 digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }
  break;

    case 2:
  {
     //2
 digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  }
  break;

    case 1:
  {
    
  //1
 digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  }
  break;

  case 0:
  {
    //0

  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }
  break;
  default:
  {
     digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  }

  }
  delay(100);
}


    
