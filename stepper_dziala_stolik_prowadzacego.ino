void setup()
{
  pinMode(10, OUTPUT);          // sets the digital pin 10 as output
}

void loop()
{
  for (int k = 1; k < 18000; k++){
    digitalWrite(10, HIGH);       // sets the digital pin 10 on
    delay(1);                  // waits for a milisecond
    digitalWrite(10, LOW);        // sets the digital pin 10 off
    delay(1);                  // waits for a milisecond
  }
  delay(2000);
}
