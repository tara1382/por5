در این پروژه با کمک char ها چراغ را روشن و خاموش میکنیم
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
  if (incomingByte =='H'){
    digitalWrite(ledpin,HIGH);
  }
  else if (incomingByte == 'L'){
    digitalWrite(ledpin,LOW);
  }
}
}
در این کد با حرف H چراغ روشن و با حرف L چراغ خاموش میشود
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
در این کد با حرف H و h چراغ روشن و با حرف L و l چراغ خاموش میشود
