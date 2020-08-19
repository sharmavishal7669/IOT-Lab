void setup() {
  pinMode(1, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int temp = analogRead(0);
  float tempC = temp/2.408;

  Serial.print("TEMPRATURE = ");
  Serial.print(tempC);
  Serial.print("Degree celsius\n");
  if(tempC<20)
  {
    digitalWrite(1,LOW);
  }
  else if(tempC>20 && tempC>30)
  {
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(1,LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(1,HIGH);
  }
}
