#define buzzer 8

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, 1000); //send 1KHz sound signal
  delay(1000);        //for 1 sec
  noTone(buzzer);     //stop buzzer sound
}
