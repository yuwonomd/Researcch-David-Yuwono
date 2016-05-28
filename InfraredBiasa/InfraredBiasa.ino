int ledPin = 13;
int infraPin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(infraPin, INPUT);
  //digitalWrite(infraPin, HIGH); // enable pull-up resistor
  digitalWrite(ledPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valInfraPin = digitalRead(infraPin);
  if (valInfraPin == LOW) {
    Serial.print("value : ");
    Serial.println(valInfraPin);
    //delay(500);
    }
    else{
      Serial.print("no value ,");
      Serial.println(valInfraPin);
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      delay(1000);
      }
}
