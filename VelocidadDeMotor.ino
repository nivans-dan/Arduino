int IN3 = 7;
int IN4 = 6;
int ENB = 5;
int EST = 0;
int Band = 0;
int Band2 = 0;

void setup ()
{
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print(EST);
  if(Serial.available() > 0)
  {
   EST = Serial.read();
  }
  if(EST == 'A' && Band == 0)
  {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, 100);
    delay(3000);
    Band = 1;
    EST = 0;
  }
  if(EST == 'A' && Band == 1)
  {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    Band = 0;
    EST = 0;
  }
  if(EST == 'B' && Band2 == 0)
  {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, 170);
    delay(3000);
    Band2 = 1;
    EST = 0;
  }
  if(EST == 'B' && Band2 == 1)
  {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    Band2 = 0;
    EST = 0;
  }
}
