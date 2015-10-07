int counts;
int inputPin = 2;

void setup()
{
  Serial.begin(9600);
  //pinMode(inputPin, INPUT);
  counts = 0;
  attachInterrupt(0, blink, LOW);
}

void loop()
{
  Serial.println(counts);
  counts = 0;
  delay(1000);
}

void blink()
{
    detachInterrupt (0);
    counts++;
    //while(digitalRead(inputPin!=0)){
      //Serial.println(digitalRead(inputPin));
    //  }
    delay(2);
    attachInterrupt(0, blink, LOW);
}









