const int motionPin = 3;
int val;

void setup() {
  Serial.begin(9600);
  val = 0;
}

void loop() {
 val = digitalRead(motionPin);
 Serial.println(val);

}

