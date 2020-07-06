const int buzzer = 8;
int countState = 0;
bool showLog = true;
bool checkBuzzerLoud = true;
bool checkButton = true;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == 0)
  {
    if (checkButton == true)
    {
      if (countState >= 9)
      {
        countState = 1;
      }
      else
      {
        countState++;
      }
      checkButton = false;
    }
    Serial.println(countState);
  }
  if (digitalRead(2) == 1)
  {
    checkButton = true;
  }
  if (countState == 0)
  {
    for (int pin = 3; pin <= 13; pin++) {
      digitalWrite(pin, 1);
      delay(100);
      digitalWrite(pin, 0);
    }
  }
  if (countState == 1 || countState == 4 || countState == 7)
  {
    if (checkBuzzerLoud == true && countState == 1)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = false;
    }
    if (checkBuzzerLoud == false && countState == 4)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = true;
    }
    if (checkBuzzerLoud == true && countState == 7)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = false;
    }
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);
    digitalWrite(13, 1);
    showLog = true;
  }
  if (countState == 2 || countState == 5 || countState == 8)
  {
    if (checkBuzzerLoud == false && countState == 2)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = true;
    }
    if (checkBuzzerLoud == true && countState == 5)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = false;
    }
    if (checkBuzzerLoud == false && countState == 8)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = true;
    }
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    showLog = true;
  }
  if (countState == 3)
  {
    if (showLog == true)
    {
      Serial.println("Faster X2 (Current Speed X2)");
      showLog = false;
    }
    if (checkBuzzerLoud == true)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = false;
    }
    digitalWrite(3, 1);
    delay(50);
    digitalWrite(3, 0);
    delay(50);
    digitalWrite(4, 1);
    delay(50);
    digitalWrite(4, 0);
    delay(50);
    digitalWrite(5, 1);
    delay(50);
    digitalWrite(5, 0);
    delay(50);
    digitalWrite(6, 1);
    delay(50);
    digitalWrite(6, 0);
    delay(50);
    digitalWrite(7, 1);
    delay(50);
    digitalWrite(7, 0);
    delay(50);
    digitalWrite(9, 1);
    delay(50);
    digitalWrite(9, 0);
    delay(50);
    digitalWrite(10, 1);
    delay(50);
    digitalWrite(10, 0);
    delay(50);
    digitalWrite(11, 1);
    delay(50);
    digitalWrite(11, 0);
    delay(50);
    digitalWrite(12, 1);
    delay(50);
    digitalWrite(12, 0);
    delay(50);
    digitalWrite(13, 1);
    delay(50);
    digitalWrite(13, 0);
    delay(50);
  }
  if (countState == 6)
  {
    if (showLog == true)
    {
      Serial.println("Faster X4 (Current Speed X4)");
      showLog = false;
    }
    if (checkBuzzerLoud == false)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = true;
    }
    digitalWrite(3, 1);
    delay(25);
    digitalWrite(3, 0);
    delay(25);
    digitalWrite(4, 1);
    delay(25);
    digitalWrite(4, 0);
    delay(25);
    digitalWrite(5, 1);
    delay(25);
    digitalWrite(5, 0);
    delay(25);
    digitalWrite(6, 1);
    delay(25);
    digitalWrite(6, 0);
    delay(25);
    digitalWrite(7, 1);
    delay(25);
    digitalWrite(7, 0);
    delay(25);
    digitalWrite(9, 1);
    delay(25);
    digitalWrite(9, 0);
    delay(25);
    digitalWrite(10, 1);
    delay(25);
    digitalWrite(10, 0);
    delay(25);
    digitalWrite(11, 1);
    delay(25);
    digitalWrite(11, 0);
    delay(25);
    digitalWrite(12, 1);
    delay(25);
    digitalWrite(12, 0);
    delay(25);
    digitalWrite(13, 1);
    delay(25);
    digitalWrite(13, 0);
    delay(25);
  }
  if (countState == 9)
  {
    if (showLog == true)
    {
      Serial.println("Faster X8 (Current Speed X8)");
      showLog = false;
    }
    if (checkBuzzerLoud == true)
    {
      tone(buzzer, 400);
      delay(100);
      noTone(buzzer);
      checkBuzzerLoud = false;
    }
    digitalWrite(3, 1);
    delay(12.5);
    digitalWrite(3, 0);
    delay(12.5);
    digitalWrite(4, 1);
    delay(12.5);
    digitalWrite(4, 0);
    delay(12.5);
    digitalWrite(5, 1);
    delay(12.5);
    digitalWrite(5, 0);
    delay(12.5);
    digitalWrite(6, 1);
    delay(12.5);
    digitalWrite(6, 0);
    delay(12.5);
    digitalWrite(7, 1);
    delay(12.5);
    digitalWrite(7, 0);
    delay(12.5);
    digitalWrite(9, 1);
    delay(12.5);
    digitalWrite(9, 0);
    delay(12.5);
    digitalWrite(10, 1);
    delay(12.5);
    digitalWrite(10, 0);
    delay(12.5);
    digitalWrite(11, 1);
    delay(12.5);
    digitalWrite(11, 0);
    delay(12.5);
    digitalWrite(12, 1);
    delay(12.5);
    digitalWrite(12, 0);
    delay(12.5);
    digitalWrite(13, 1);
    delay(12.5);
    digitalWrite(13, 0);
    delay(12.5);
  }
}
