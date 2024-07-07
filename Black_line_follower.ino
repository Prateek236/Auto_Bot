void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(3, OUTPUT);//left
  pinMode(6, OUTPUT);//left motor
  pinMode(7, OUTPUT);//right
  pinMode(8, OUTPUT);//right motor

 pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  analogWrite(9, 100);
  analogWrite(10, 100);

}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(4) == LOW) && (digitalRead(5) == LOW)) 
  {
    frwd();
  }

  if ((digitalRead(4) == HIGH) && (digitalRead(5) == HIGH)) 
  {
    stopp();
  }
  if ((digitalRead(4) == LOW) && (digitalRead(5) == HIGH))  
  {
    right();
  }
  if ((digitalRead(4) == HIGH) && (digitalRead(5) == LOW))
  {
    left();
  }
}

void frwd()
{
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

}
void right()
{
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
void left()
{
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
void stopp()
{
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
