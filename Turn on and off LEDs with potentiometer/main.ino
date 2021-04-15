int pins = 4; //How many pins are in the circuit
int pinsLEDs[] = {13, 12, 11, 10}; //Pins for the LEDs
int oneLED = 0; //One LED that will be equal to certain rotation of sensor
int sensorPin = A0; //Sensor's pin
int sensorValue = 0; //Sensor's read value

void setup() 
{
 
 for(int i=0; i<pins; i++) //Setting the LEDs' pins mode for output
   pinMode(pinsLEDs[i], OUTPUT);
 
}

void loop() 
{
 
  sensorValue = analogRead(sensorPin); //Reading the sensor's rotation
  oneLED = map(sensorValue, 0, 1023, 0, pins); //Setting how much of the rotation will be one LED

  for(int i=0; i<pins; i++) //Going through all the pins
  {
    if(i >= oneLED) //If variable i passed a LED, turn that LED on
      digitalWrite(pinsLEDs[i], HIGH);
    else //Else turn that LED off
      digitalWrite(pinsLEDs[i], LOW);
  }

}
