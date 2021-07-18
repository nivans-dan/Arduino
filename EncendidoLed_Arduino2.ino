String intString = "";
bool stringComplete = false;
 
void setup() 
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  intString.reserve(200);
}
 
void loop()
{
  if (stringComplete) 
  {
    if (intString == "LED1ON_") 
    {
      digitalWrite(8, HIGH);
    }
    else if (intString == "LED1OFF_") 
    {
      digitalWrite(8, LOW);
    }
    intString = "";
    stringComplete = false;
  }
}
void serialEvent() 
{
  while (Serial.available()) 
  {
    char inChar = (char)Serial.read();
    intString += inChar;
    if (inChar == '_') 
    {
      stringComplete = true;
    }
  }
}
