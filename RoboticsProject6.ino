int Lm35Pin=A0;
int Led=8;
#define Buzzer 9
int Timing=1000;
int ReadValue=0;
float Temperature_Voltage=0;
float Temperature=0;


void setup() 
{
 
  pinMode(Led,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
}
 
void loop() {

 ReadValue=analogRead(Lm35Pin);
 
 Temperature_Voltage=(ReadValue / 1023.0)*5000;
 Temperature=Temperature_Voltage/10.0;
 
 Serial.println(Temperature);


 if(Temperature>=45){
 digitalWrite(Led,HIGH);
 digitalWrite(Buzzer,HIGH); 
 delay(Timing);
 digitalWrite(Led,LOW);
 digitalWrite(Buzzer,LOW);
 delay(Timing);
 }
else{
  digitalWrite(Led,LOW);
 digitalWrite(Buzzer,LOW);
 
  }
 }
