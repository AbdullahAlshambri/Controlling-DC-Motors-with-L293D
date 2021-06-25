
int speedpin=6;
int speedpin1=12;
int dir1=5;
int dir2=3;
int dir12=9;
int dir22=8;
int mspeed=255;
int potpin0 = A0;
int val1;
int buttonState = 0;

void setup() {
pinMode(2, INPUT); 
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(speedpin1,OUTPUT);
pinMode(dir12,OUTPUT);
pinMode(dir22,OUTPUT);
Serial.begin(96000);
}

void loop() {
  buttonState = digitalRead(2);
  
  if (buttonState == LOW) {
    
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    digitalWrite(dir12,LOW);
    digitalWrite(dir22,HIGH);
    val1 = analogRead(potpin0);           
    val1 = map(val1, 0, 1023, 0, 255); 
    analogWrite(speedpin,val1);
    analogWrite(speedpin1,val1);
    delay(15);
  } else {
    
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    digitalWrite(dir12,HIGH);
    digitalWrite(dir22,LOW);
    val1 = analogRead(potpin0);           
    val1 = map(val1, 0, 1023, 0, 255); 
    analogWrite(speedpin,val1);
    analogWrite(speedpin1,val1);
    delay(15);
  }
  delay(500); 
}
