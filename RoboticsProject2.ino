#define Button 8
#define Led 10

//int button_status = 0 ;

void setup() {
  pinMode(Button, INPUT);  
  pinMode(Led, OUTPUT); 
}

void loop() {
  //button_status = digitalRead(Button);
  
  if (digitalRead(Button) == 1)
  digitalWrite(Led, HIGH);
  else 
  digitalWrite(Led, LOW);  
  
}
