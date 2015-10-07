#define inputPin1 2
#define interupt1 0
#define inputPin2 3
#define interupt2 1

int counts;

void setup()
{
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);

  Serial.begin(9600);
  counts = 0;
  attachInterrupt(interupt1, blink, LOW);
}

void loop()
{
  Serial.println(counts);
  counts = 0;
  delay(1000);
}

void blink()
{
    detachInterrupt (interupt1);
    if(digitalRead(inputPin2) == LOW && digitalRead(inputPin1) == LOW){
      counts++;
    }
    while(digitalRead(inputPin2) == LOW || digitalRead(inputPin1) == LOW){
      //delayMicroseconds(1);  
    }
    attachInterrupt(interupt1, blink, LOW);
}
