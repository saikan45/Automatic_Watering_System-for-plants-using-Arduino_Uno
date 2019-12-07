int pin=7;
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
if(sensorValue<500)
digitalWrite(pin,HIGH);
else
digitalWrite(pin,LOW);

}
