int led = PB11;
int led1 = PB10;
int led2 = PB1;
int led3 = PB0;
int led4 = PA7;
int led5 = PA6;
int led6 = PA5;
int led7 = PA4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  digitalWrite(led,0);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,1);
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,1);
  digitalWrite(led6,1);
  digitalWrite(led7,1);
  delay(1000);
  digitalWrite(led,0);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  delay(1000);
}
