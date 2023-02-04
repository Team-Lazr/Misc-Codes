#include <LiquidCrystal.h>


LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
void setup() 
{
 lcd.begin(16,2);
}

void loop() 
{

  lcd.print("Rachit");
  delay(1000);
  
  lcd.setCursor(2,1);
  lcd.print("Hacker Hai");
  delay(3000);
  lcd.clear();
  delay(2000);
}
