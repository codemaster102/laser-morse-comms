int sensorValue = 0;

void setup(){               
  pinMode(A1, INPUT);
  Serial.begin(9600);        
}                            

void loop() {
  sensorValue = analogRead(A1);
  float voltage = (sensorValue / 1023.0) * 5.0;  // Convert to voltage
  Serial.println(voltage, 2);  // Print voltage with 2 decimal places
  delay(1000);
}
