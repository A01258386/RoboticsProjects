//RAIN SENSOR
int sensorPin = A0;                
int threshold = 100;             
int buzzerPin = 8;                
int data;                          

void setup() {
  pinMode(buzzerPin, OUTPUT);      
}
void loop() {
  data = analogRead(sensorPin);    
  if(data > threshold){           
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                            
    digitalWrite(buzzerPin, LOW);
  }
}
