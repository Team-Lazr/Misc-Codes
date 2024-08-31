  
#include <LiquidCrystal.h>


const int rs = 10;
const int en = 9;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  }

char ch = 0;
int col=0;
int row=0;


void loop() {
  if (Serial.available() > 0) 
  {    
    ch = Serial.read();       
      Serial.print(ch); //Printing the Data to the Serial Monitor
      Serial.println(); //Proceeding to next line in Serial Monitor
      lcd.setCursor(col,row); //Placing Cursor 
      lcd.print(ch); //Sending the Data to LCD
      col++; //Increasing the column number

       if(col>15)
      {
        row++;
        col=0;
        lcd.print(ch);
      }
    }
    
    }
    

