#include <Servo.h>

Servo valve1;
Servo valve2;

int pos1 = 0;
int pos2 = 0;

void setup() 

{
 
 valve1.attach(11);
 valve2.attach(10);

}

void loop() 

{
  
 for (pos1 = 0; pos1 <= 180; pos1 += 1) 

  {

   valve1.write(pos1); 
   delay(20);
  
  }
  delay(5000);

  
 for (pos1 = 180; pos1 >= 0; pos1 -= 1) 

  {
    
   valve1.write(pos1);
   delay(20);
  
  }
  delay(5000);
  
  
  
       
  
 for (pos2 = 0; pos2 <= 180; pos2 += 1) 

  {  
   
   valve2.write(pos2); 
   delay(20);
  
  }
  delay(5000);

 for (pos2 = 180; pos2 >= 0; pos2 -= 1) 

  {
    
   valve2.write(pos2);
   delay(20);
  
  }
  delay(5000);
}
