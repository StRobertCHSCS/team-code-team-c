  #include <PRIZM.h>

  PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
}

void loop() {
  // put your main code here, to run repeatedly:
  prizm.setRedLED(HIGH);
  delay(1000);
  prizm.setRedLED(LOW);
  delay(1000);
}
