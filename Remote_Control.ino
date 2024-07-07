const int in1 = 3;
const int in2 = 6;
const int in3 = 7;
const int in4 = 8;

//SoftwareSerial BT(13, 12); // RX, TX
char Data; // the data given from Computer

void setup()
{
  pinMode(in1, OUTPUT) ;
  pinMode(in2, OUTPUT) ;
  pinMode(in3, OUTPUT) ;
  pinMode(in4, OUTPUT) ;

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  analogWrite(9, 100);
  analogWrite(10, 100);

  Serial.begin(9600);
  //  BT.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    Data = Serial.read();

    if (Data == 'F') //forward
    {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);

    }
    if (Data == 'B') //backward
    {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }
    if (Data == 'R') //right
    {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    if (Data == 'L') //left
    {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }
    if (Data == 'S') //stop
    {
      digitalWrite(in1, 0);
      digitalWrite(in2, 0);
      digitalWrite(in3, 0);
      digitalWrite(in4, 0);
    }
  }
}
