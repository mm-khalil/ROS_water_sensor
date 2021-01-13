    
 // #1 LCD CODE
#include "LiquidCrystal.h"

LiquidCrystal lcd(12,11,5,4,3,2);
void setup() 
{   }

void loop() 
{ 
     lcd.begin(16, 2);


     

     
     lcd.setCursor(0, 0);
     lcd.print("NCRA"); 
     lcd.setCursor(0, 1);
     lcd.print("Swarm RL"); 
     delay(1000);
     

   
   
}






/*

// #2 water sensor + LCD code
#include "LiquidCrystal.h"
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define Water_detector 8 
#define LED 9 


void setup() 
{  pinMode(Water_detector, INPUT); 
   pinMode(LED, OUTPUT); 
   Serial.begin(9600);  
   lcd.begin(16, 2);         
   
  
  
   
}
void loop() 
{  if( digitalRead(Water_detector) == LOW) 
   {   Serial.println("No water");
       lcd.print("No Water");
       digitalWrite(LED,LOW);            
   }
   else 
   {   Serial.println("Water");
       lcd.print("Water");
       digitalWrite(LED,HIGH);           
   }       
  
   lcd.clear();

}



*/
