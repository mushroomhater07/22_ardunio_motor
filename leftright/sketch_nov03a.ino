int input = 0;
int right = 8;
int left =9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(left, OUTPUT); //GND == -ve
  pinMode(right, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0){
    input = Serial.read();
    Serial.println(input,DEC);
    if(input == 48){
      digitalWrite(left, LOW);
      digitalWrite(right, LOW);}
    else if (input == 49){
      digitalWrite(left, HIGH);
      digitalWrite(right, LOW);}   
    else if (input == 50){
      digitalWrite(right,HIGH);
      digitalWrite(left, LOW);}
  }
}
