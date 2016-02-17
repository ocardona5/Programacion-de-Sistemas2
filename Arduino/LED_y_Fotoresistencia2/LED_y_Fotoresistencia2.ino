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
  pinMode( ledPin, LOW);
  pinMode( 11, LOW);
  pinMode( 10, LOW );
 Valor = analogRead(fotoPin)*6.8;
int numero= 600-Valor;
if(numero<0)
{
  numero=0;
} 
if(numero>=0 and numero<=200)
{
  analogWrite(ledPin,numero);
}
else if (numero>=201 and numero<=400)
{
analogWrite(10,numero);
}
else if(numero>=401 and numero<=600)
{
  analogWrite(11,numero);
}

  Serial.println(numero); 
  delay(100);
}
