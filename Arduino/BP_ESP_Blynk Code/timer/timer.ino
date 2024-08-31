
int starttime=0;
int currenttime=0;
int diffintime=0;
int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  starttime=millis();
}

void loop() {
//  starttime=millis();
  // put your main code here, to run repeatedly:
  currenttime=millis();
  diffintime=(currenttime-starttime);
  if(diffintime>1000)
  {
    Serial.println(i++);
    starttime=millis();
  }
}
