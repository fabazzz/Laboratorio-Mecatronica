int red = 3;
int yellow = 4;
int green = 5;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(green, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
   digitalWrite(yellow, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
}