void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a =analogRead(15);
Serial.println("the ldr value is");
Serial.println(a);
delay(2000);
}
