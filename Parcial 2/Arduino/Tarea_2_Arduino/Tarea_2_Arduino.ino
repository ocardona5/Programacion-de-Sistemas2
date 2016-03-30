int valor[5];
int led[5];

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600); 
  randomSeed(analogRead(0));
}

void generar(int valor[], int led[]){
  led[0]=6;
  led[1]=7;
  led[2]=8;
  led[3]=9;
  led[4]=10;
  for (int i=0;i<5;i++)
  {
    valor[i] = random(101);
  }
}
void encenderLed(int valor[], int led[]){
  for (int i=0;i<5;i++)
  {
    if(valor[i]%2==0 && valor[i]>=50) {digitalWrite(led[i],HIGH);}
    else {digitalWrite(led[i],LOW);}
    
    Serial.print(valor[i]);
    Serial.print("\n");
  }
}

int contar (int valor[]){
  int contarled=0;
    for(int i=0;i<5;i++)
    {
      if (valor[i]%2==1)
      {
        contarled++;
      }
    }
  return contarled;
}

void loop() {
    
    generar(valor, led);
    encenderLed(valor,led);
    if ((contar(valor))>=3) {digitalWrite(5,HIGH);}
    else {digitalWrite(5,LOW);}
    Serial.print("Cantidad de Impares: ");
    Serial.print(contar(valor));
    Serial.print("\n");
      delay(5500);
      
}




