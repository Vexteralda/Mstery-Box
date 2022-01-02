
#include<Servo.h>
#define mainbutton 6
Servo servo1;

int closeangle = 10;
int openangle = 142;
int yarimkapak = 40;
int a;
int k;
void setup() {
servo1.attach(9);
pinMode(mainbutton, INPUT_PULLUP);


}

void loop() {
  
  servo1.write(closeangle);                   //engıne functıon
  a = digitalRead(mainbutton);                //switch function
   
    
  if (a==1 && k == 0)                         //startıng loops
  {
   for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(5);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
  }
  else if ( a==1 && k == 1)
  {
   for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(5);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
  }
    else if ( a==1 && k == 2)
  {
   for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(5);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
  }
  else if (a == 1 && k == 3)
  {
    for (int i = closeangle ; i<=50 ; i++)
    {
    servo1.write(i);
    delay(10);
    }
    delay(1000);
    for (int i = 50 ; i>=closeangle ; i--)
    {
    servo1.write(i);
    delay(10);
    }
    for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(5);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
  }
  //surprıse off
  else if ( a==1 && k == 4)
  {
    
    for (int i =closeangle;i<=110;i++)
    {
    servo1.write(i);
    delay(5);
    }
    delay(500);
    for (int i = 110 ; i>=closeangle ; i--)
    {
    servo1.write(i);
    delay(5);
    }
    delay(1000);
   for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(2);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
  
    }

    //only on/off
    else if ( a==1 && k == 5)
    {
       for (int i =closeangle;i<=yarimkapak;i++)
    {
    servo1.write(i);
    delay(5);
    }
    delay(100);
    for (int i = yarimkapak ; i>=closeangle ; i--)
    {
    servo1.write(i);
    delay(5);
    }
     for (int i =closeangle;i<=yarimkapak;i++)
    {
    servo1.write(i);
    delay(5);
    }
    delay(100);
    for (int i = yarimkapak ; i>=closeangle ; i--)
    {
    servo1.write(i);
    delay(5);
    }
     for (int i =closeangle;i<=yarimkapak;i++)
    {
    servo1.write(i);
    delay(5);
    }
    delay(100);
    for (int i = yarimkapak ; i>=closeangle ; i--)
    {
    servo1.write(i);
    delay(5);
    }
    delay(500);
     for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(5);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(2);
    }
    k++;
    }
     
     
     
     
     
     
     
     //slow off
    
     else if ( a==1 && k == 6)
  {
   for (int i =0;i<=openangle;i++)
    {
    servo1.write(i);
    delay(30);
    }
    for (int i = openangle ; i>=0 ; i--)
    {
    servo1.write(i);
    delay(30);
    }
    k=0;
  }
  
  else
    servo1.write(closeangle);
    

  
  

}
