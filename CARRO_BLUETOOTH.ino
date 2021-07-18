#include <SoftwareSerial.h>
#include <Servo.h>

int bluetoothTx = 2;
int bluetoothRx = 3;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

int Motor1A = 5;
int Motor1B = 6;

int flag1 = -1;

void setup ()
{
  bluetooth.begin(115200);
  bluetooth.print("$$$");
  delay(100);
  bluetooth.println("U,9600,N");
  bluetooth.begin(9600);
  
  pinMode( Motor1A, OUTPUT );
  pinMode( Motor1B, OUTPUT );
  
  digitalWrite( Motor1A, LOW );
  digitalWrite( Motor1B, LOW );
}

void loop()
{
  if(bluetooth.available())
  {
    char toSend = (char)bluetooth.read();
    if(toSend == 'S')
    {
      flag1 = 0;
  
       digitalWrite( Motor1A, LOW);
       analogWrite( Motor1B, LOW);
     }
     if( toSend == 'F' )
     {
       if (flag1 != 1)
       {
         flag1 = 1;
         digitalWrite( Motor1A, HIGH);
         analogWrite( Motor1B, 0 );
       }
     }
   }
}
