const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;
int timePressed = 0;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
  pinMode(buttonPin; INPUT);
  
}

void loop(){
  
  buttonState = digitalRead(buttonPin);
  
  while (buttonState == HIGH) {
    
    timePressed+= 1;
    
  }
  
  if (timePressed > 0) {
   
    while (timePressed > 0){
      
      digitalWrite(ledPin, HIGH);
      timePressed-= 1;
    }
   digitalWrite(ledPin, LOW);
   
  }
}
