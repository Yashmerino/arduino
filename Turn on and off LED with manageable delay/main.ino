int sensorPin = A0; //Sensor's pin
int sensorValue = 0; //Sensor's value

void setup()
{
  pinMode(13, OUTPUT); //Setting pin modes
}

void loop()
{
  sensorValue = analogRead(sensorPin); //Reading sensor's value from pin

  digitalWrite(13, HIGH); //Turning on LED

  delay(sensorValue); //A delay that depends on sensor's value

  digitalWrite(13, LOW); //Turning off LEDs

  delay(sensorValue); //A delay that depends on sensor's value
}
