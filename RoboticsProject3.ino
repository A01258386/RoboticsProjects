//Potentiometer
#define potpin A0
int value=0;
void setup() {
  Serial.begin(9600);
  Serial.println("What says POT?");
  
}

void loop() {
value=analogRead(potpin);
//See Remaining Voltsge
float voltage=(5.00/1024.00)*value;
Serial.println(voltage);
delay(500);

}
