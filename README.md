# Laser Morse Code 

#Supplies

Breadboard x2

Arduino UNO + USB Cable

Jumper Wires x8

Photoresistor (LDR)

4.7kΩ Resistor x2

KY-008 Laser Module

#Setup

Step 1: Connect Laser Module to Arduino

Connect 5V and GND pins to power rails for easy access.

Connect the right pin to the GND rail using a 4.7kΩ resistor.

Connect the middle pin to the 5V rail.

Connect the left pin to digital pin 2 as the output.

Step 2: Connect Photoresistor to Arduino

Use another breadboard for the photoresistor.

Connect one pin to the GND rail using a 4.7kΩ resistor AND to A1.

Connect the other pin to the 5V rail.

Troubleshooting: If the circuit does not work, try reconnecting the power rails, as they may only cover half the board.

Step 3: Angle Photoresistor to Detect Laser

Ensure the laser is clearly pointing at the photoresistor.

Minimize interference from external light sources.

Verify the photoresistor readings using the following test code:

int sensorValue = 0;
void setup(){
  pinMode(A1, INPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(A1);
  float voltage = (sensorValue / 1023.0) * 5.0;
  Serial.println(voltage, 2);
  delay(1000);
}
