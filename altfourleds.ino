int led = 
int led1 =
int led2 =
int led3 =
int led4 = 
int led5 = 
int led6 = 
int led7 = 
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
  delay(1000);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  delay(1000);
}