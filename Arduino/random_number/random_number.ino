long randNumber;
const int ledPin = 13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  randomSeed(analogRead(0));
  pinMode(ledPin, OUTPUT);
}

void loop() {
  randNumber = random(10, 50);
  Serial.println(randNumber);
  if (randNumber>25) {
    digitalWrite(ledPin, HIGH);
  }
  delay(1000);
  digitalWrite(ledPin, LOW);
}
