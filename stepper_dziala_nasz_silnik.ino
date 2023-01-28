void setup()
{
  pinMode(8, OUTPUT);          // sets the digital pin 8 as output
  pinMode(9, OUTPUT);          // sets the digital pin 8 as output
  pinMode(10, OUTPUT);         // sets the digital pin 8 as output
  pinMode(11, OUTPUT);
}

void loop()
{
  for (int k = 1; k < 16 ; k++){
    //AB turn
    digitalWrite(8, HIGH);       // sets the digital pin 8 on
    digitalWrite(9, HIGH);       // sets the digital pin 9 on
    delay(10);                   // waits for 10 miliseconds
    digitalWrite(8, LOW);        // sets the digital pin 8 off
    digitalWrite(9, LOW);        // sets the digital pin 9 off
    delay(10);                   // waits for 10 miliseconds

    //BC turn
    digitalWrite(9, HIGH);       // sets the digital pin 9 on
    digitalWrite(10, HIGH);       // sets the digital pin 10 on
    delay(10);                   // waits for 10 miliseconds
    digitalWrite(9, LOW);       // sets the digital pin 9 off
    digitalWrite(10, LOW);       // sets the digital pin 10 on
    delay(10);                  // waits for 10 miliseconds

    //CD turn
    digitalWrite(10, HIGH);       // sets the digital pin 10 on
    digitalWrite(11, HIGH);       // sets the digital pin 11 on
    delay(10);                  // waits for a milisecond
    digitalWrite(10, LOW);       // sets the digital pin 10 off
    digitalWrite(11, LOW);       // sets the digital pin 11 off
    delay(10);                  // waits for 10 miliseconds

    //DA turn
    digitalWrite(11, HIGH);       // sets the digital pin 11 on
    digitalWrite(8, HIGH);       // sets the digital pin 8 on
    delay(10);                  // waits for 10 miliseconds
    digitalWrite(11, LOW);       // sets the digital pin 11 on
    digitalWrite(8, LOW);       // sets the digital pin 8 on
    delay(10);                  // waits for 10 miliseconds
  }
  delay(1000);                 // waits for a second
}
