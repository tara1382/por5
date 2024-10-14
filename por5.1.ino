const int ledpin = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0);{
  char incomingByte = Serial.read();
  if (incomingByte =='H' or incomingByte =='h'){
    digitalWrite(ledpin,HIGH);
  }
  else if (incomingByte == 'L' or incomingByte =='l'){
    digitalWrite(ledpin,LOW);
  }
}
}
