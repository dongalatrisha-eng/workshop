int led = PC13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  digitalWrite(led,0);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,1);
  delay(1000);
  digitalWrite(led,0);
  delay(1000);

}
