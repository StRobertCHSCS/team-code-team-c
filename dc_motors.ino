  #include <PRIZM.h>

  PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
}

void loop() {
  // put your main code here, to run repeatedly:
  prizm.setMotorPower(1,25);
  delay(5000);
  prizm.setMotorPower(1,0);
  delay(2000);
  prizm.setMotorPower(1,-25);
  delay(5000);
  prizm.setMotorPower(1,0);
  delay(2000);
}
