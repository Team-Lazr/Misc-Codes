#define Rledpin 7
#define Yledpin 8
#define Gledpin 9
int state = 0;

void setup() 
{
  pinMode(Rledpin, OUTPUT);
  pinMode(Yledpin, OUTPUT);
  pinMode(Gledpin, OUTPUT);
  digitalWrite(Rledpin, LOW);
  digitalWrite(Yledpin, LOW);
  digitalWrite(Gledpin, LOW);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }

 if (state == '0') 
 {
  digitalWrite(Rledpin, LOW); // Turn LED OFF
  Serial.println("RLED: OFF"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
 else if (state == '1') 
 {
  digitalWrite(Rledpin, HIGH);
  Serial.println("RLED: ON");;
  state = 0;
 } 

 else if (state == '2') 
 {
  digitalWrite(Yledpin, LOW);
  Serial.println("YLED: OFF");;
  state = 0;
 } 

 else if (state == '3') 
 {
  digitalWrite(Yledpin, HIGH);
  Serial.println("YLED: ON");;
  state = 0;
 } 

 else if (state == '4') 
 {
  digitalWrite(Gledpin, LOW);
  Serial.println("GLED: OFF");;
  state = 0;
 } 

 else if (state == '5') 
 {
  digitalWrite(Gledpin, HIGH);
  Serial.println("GLED: ON");;
  state = 0;
 } 
}
