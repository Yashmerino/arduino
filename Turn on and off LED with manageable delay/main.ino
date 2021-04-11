int sensorPin = A0; //Sensor's pin
int sensorValue = 0; //Sensor's value

void setup()
{
  pinMode(8, OUTPUT); //Setting pin's modes
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin); //Reading sensor's value from pin

  digitalWrite(8, HIGH); //Turning on LEDs
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

  delay(sensorValue); //A delay that depends on sensor's value

  digitalWrite(8, LOW); //Turning off LEDs
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  delay(sensorValue); //A delay that depends on sensor's value
}
