#define a 13
#define b 12
#define c 11
#define d 10
void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
}

void loop()
{
  digitalWrite(a , HIGH);
  delay(50);
  digitalWrite(a , LOW);
  delay(50);
  digitalWrite(a , HIGH);
  delay(50);
  digitalWrite(a , LOW);
  delay(50);
  digitalWrite(b , HIGH);
  delay(50);
  digitalWrite(b , LOW);
  delay(50);
  digitalWrite(b , HIGH);
  delay(50);
  digitalWrite(b , LOW);
  delay(50);
  digitalWrite(c , HIGH);
  delay(50);
  digitalWrite(c , LOW);
  delay(50);
  digitalWrite(c , HIGH);
  delay(50);
  digitalWrite(c , LOW);
  delay(50);
  digitalWrite(d , HIGH);
  delay(50);
  digitalWrite(d , LOW);
  delay(50);
  digitalWrite(d , HIGH);
  delay(50);
  digitalWrite(d , LOW);
  delay(50);
}
