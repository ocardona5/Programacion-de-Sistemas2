#include <LiquidCrystal.h>

const int trigPin = 51; 
const int echoPin = 53;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() { 
      Serial.begin(9600); 
      pinMode(trigPin, OUTPUT);
      pinMode(echoPin, INPUT); 
      digitalWrite(trigPin, LOW);
      lcd.begin(16, 2);   
      pinMode(44, OUTPUT);

}
void loop() {
      //lcd.clear();
      long tiempo, cm;
      digitalWrite(trigPin, HIGH); 
      delayMicroseconds(10); 
      digitalWrite(trigPin, LOW);
      tiempo = pulseIn(echoPin, HIGH); 
      cm= float(0.017*tiempo);
      Serial.print(cm); 
      Serial.print(" cm");
      lcd.setCursor(0,0);
      lcd.print("Distancia es: ");
      if (cm>=7 && cm<=10)
      {
        lcd.setCursor(14,0);
        lcd.print("OK");
        digitalWrite(44, HIGH);
      }
      else
        {
          lcd.setCursor(14,0);
          lcd.print("  ");
          digitalWrite(44, LOW); 
        }
      lcd.setCursor(0, 1);
      lcd.print(cm);
      lcd.print("cm        ");     
      delay(250); 
        
}
     

 
