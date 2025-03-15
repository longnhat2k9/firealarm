#define buzz 3
#define gas A0
#define temp A5
#define ll long long
#define led LED_BUILTIN

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(gas, INPUT);
  pinMode(temp, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int a = analogRead(gas);
  int b = analogRead(temp);
  if(a >= 150 && b >= 240)
  {
    tone(buzz,1000);
    digitalWrite(led, HIGH);
    Serial.println("FIRE");
  }
  else
  {
    noTone(buzz);
    digitalWrite(led, LOW);
    Serial.println("NO FIRE");
  }
}
