const int xPin = A0;
const int yPin = A1;
const int zPin = A2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogReference(EXTERNAL);
  Serial.print("X Axis:");
  Serial.print(analogRead(xPin));
  Serial.print("\t");

  Serial.print("Y Axis:");
  Serial.print(analogRead(yPin));
  Serial.print("\t");

  Serial.print("Z Axis:");
  Serial.print(analogRead(zPin));
  Serial.println();

  delay(500);



}
