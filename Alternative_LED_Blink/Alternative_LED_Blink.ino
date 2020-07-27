#define pin 1               // using macro tp fix value of pin


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on
  digitalWrite(2, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off
  digitalWrite(2, HIGH);
  delay(1000);                       // wait for a second
}
