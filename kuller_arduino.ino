
volatile int val;

void rpm(){
  val++;
}

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, rpm, CHANGE);

}

void loop() {
  val = 0;
  delay(500);
  Serial.print((val*60)/2);
  Serial.print(" rpm ");
  Serial.print(val);
  Serial.println(" val ");
}
