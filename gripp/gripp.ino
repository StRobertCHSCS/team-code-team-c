#include <PRIZM.h>      // Include the PRIZM library in sketch

PRIZM prizm;            // Instantiate an object in the PRIZM class named "prizm".

void setup() {
  
  prizm.PrizmBegin();   // Initiates the PRIZM controller. Must be called at the beginning
  prizm.setServoSpeed(2,300);
}

void loop() {

  prizm.setServoPosition(2,-420);        // Move servo #1 to 180 degree position. First number (#2) is ID of expansion controller.
  delay(2000);         
  // wait here for 3 seconds while servo moves to position
  prizm.setServoPosition(2,420);          // Move servo #1 to 0 degree position. First number (#2) is ID of expansion controller.
  delay(2000);  
                           // wait here for 3 seconds while servo moves to position, then repeat
  
}
