/*Temperature Sensing Code
 * Written for CIJE 
 * By: CIJE Mentor Robert Jones
 * Written by: Robert A. Jones
 * Created on: 20 Feb 19
 * Revised on:
 * 
 */

 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);   // set the LCD address to 0x3F for a 16 chars and 2 line display


void setup()
{
  lcd.init();                       // initialize the lcd 
  lcd.backlight();                  // turn on the LED back light for the LCD
  Serial.begin(9600);
}

void loop()
{  
   //----------------------------
   //Clear the screen post updated data
   
   lcd.clear();
   //----------------------------
   //Position Data, post message
      
   lcd.setCursor(0,0);// (line position (0-15), line number (0,1)   
   lcd.print("Today is Wednesday"); // Simple Message
  

   //----------------------------
   //Add a delay, the display needs time to print message
   delay(250);
}
