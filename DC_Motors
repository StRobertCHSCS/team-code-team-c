  #include <PRIZM.h>    
  PRIZM prizm;          
  
void setup() {        

  prizm.PrizmBegin();   
}

void loop() {     

  prizm.setMotorPower(1,25);
  prizm.setGreenLED(HIGH);    
  delay(1000); 
  prizm.setGreenLED(LOW);
  delay(1000);
  prizm.setGreenLED(HIGH);
  delay(1000);
  prizm.setGreenLED(LOW);                 
  prizm.setMotorPower(1,0);     
  delay(2000);                  
  prizm.setMotorPower(1,-25);   
  prizm.setRedLED(HIGH);    
  delay(1000); 
  prizm.setRedLED(LOW);
  delay(1000);
  prizm.setRedLED(HIGH);
  delay(1000);
  prizm.setRedLED(LOW);              
  prizm.setMotorPower(1,0);     
  delay(2000);                   
  
}
