#define pin 1

void setup()
{
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
  if(a>100)
    digitalWrite(pin,HIGH);
   else
    digitalWrite(pin,LOW);
  delay(1000);
}
