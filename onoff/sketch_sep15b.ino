//int speed;
const int motorpin = 7;
int inputpin;
void setup() {
  //speed = 0;
  inputpin = 12;
  pinMode(inputpin, INPUT);
  pinMode(motorpin, OUTPUT);
  Serial.begin(9600);
  //IRrecv irrecv(RECV_PIN);     
  //decode_results results;    
  //irrecv.enableIRIn();  
  //if (irrecv.decode(&results))// Returns 0 if no data ready, 1 if data ready.    
  //int value = results.value;
  //Serial.println(results.value);
  //irrecv.resume();      
}

void loop() {
  Serial.println(digitalRead(inputpin));
  // put your main code here, to run repeatedly:
  select(digitalRead(inputpin)){
    case 1:
      digitalWrite(motorpin, HIGH);
    break;
    default:
      digitalWrite(motorpin, LOW);
    break;
  }
}
// analogRead values go from 0 to 1023,
//analogWrite values from 0 to 255
//if (Serial.available()) {
//int speed = Serial.parseInt();
