void setup() 
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() 
{
  String Serie;
  int i;
  if(Serial.available())
  {
    Serie = Serial.readStringUntil('\n');
    if(Serie == "serie1")
    {
      Serial.print("Ejecutando Serie 1...");
      for(i=0;i<3;i++)
      {
        digitalWrite(2, HIGH);
        delay(200);
        digitalWrite(2, LOW);
        delay(200);
        digitalWrite(3, HIGH);
        delay(200);
        digitalWrite(3, LOW);
        delay(200);
        digitalWrite(4, HIGH);
        delay(200);
        digitalWrite(4, LOW);
        delay(200);
        digitalWrite(5, HIGH);
        delay(200);
        digitalWrite(5, LOW);
        delay(200);
      }
      Serial.print("\n F I N A L I Z A D O \n");
    }
    if(Serie == "serie2")
      {
        Serial.print("Ejecutando Serie 2...");
        for(i=0;i<3;i++)
        {
          digitalWrite(5, HIGH);
          delay(200);
          digitalWrite(5, LOW);
          delay(200);
          digitalWrite(4, HIGH);
          delay(200);
          digitalWrite(4, LOW);
          delay(200);
          digitalWrite(3, HIGH);
          delay(200);
          digitalWrite(3, LOW);
          delay(200);
          digitalWrite(2, HIGH);
          delay(200);
          digitalWrite(2, LOW);
          delay(200);
        }
        Serial.print("\n F I N A L I Z A D O \n");
      }
     if(Serie == "serie3")
     {
       Serial.print("Ejecutando Serie 3...");
       for(i=0;i<3;i++)
       {
         digitalWrite(2, HIGH);
         delay(200);
         digitalWrite(2, LOW);
         delay(200);
         digitalWrite(5, HIGH);
         delay(200);
         digitalWrite(5, LOW);
         delay(200);
         digitalWrite(3, HIGH);
         delay(200);
         digitalWrite(3, LOW);
         delay(200);
         digitalWrite(4, HIGH);
         delay(200);
         digitalWrite(4, LOW);
         delay(200);
       }
       Serial.print("\n F I N A L I Z A D O \n");
     }
     if(Serie == "serie4")
     {
       Serial.print("Ejecutando Serie 4...");
       for(i=0;i<3;i++)
       {
         digitalWrite(3, HIGH);
         delay(200);
         digitalWrite(3, LOW);
         delay(200);
         digitalWrite(4, HIGH);
         delay(200);
         digitalWrite(4, LOW);
         delay(200);
         digitalWrite(2, HIGH);
         delay(200);
         digitalWrite(2, LOW);
         delay(200);
         digitalWrite(5, HIGH);
         delay(200);
         digitalWrite(5, LOW);
         delay(200);
       }
       Serial.print("\n F I N A L I Z A D O \n");
     }
   }
 }
