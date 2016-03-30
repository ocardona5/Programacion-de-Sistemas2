int fotoPin = 0;   
int ledPin = 9;          
int Valor ;       

void setup() {
  Serial.begin(9600);  
  pinMode( ledPin, OUTPUT );
  pinMode( 11, OUTPUT );
  pinMode( 10, OUTPUT );
}

void loop() {
  
 Valor = analogRead(fotoPin);
int numero= 100-Valor;
if(numero<0)
{
  numero=0;
} 

  analogWrite(ledPin,numero);

  Serial.println(numero); 
  delay(100);
}
