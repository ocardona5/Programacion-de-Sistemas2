const int lin=3;
const int col=3;
int numeros [lin][col];
int led [lin][col];
#include <LiquidCrystal.h>;
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

void setup() {
    for (int i=30;i<39;i++){
    pinMode(i, OUTPUT);}
    lcd.begin(16, 2);
    Serial.begin(9600);
}
void ingreso (int numeros[lin][col],int led [lin][col])
{
    led[0][0]=30;
    led[0][1]=31;
    led[0][2]=32;
    led[1][0]=33;
    led[1][1]=34;
    led[1][2]=35;
    led[2][0]=36;
    led[2][1]=37;
    led[2][2]=38;
    
    int x=29;  
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            numeros[i][j]=rand()%2;
            Serial.print(numeros[i][j]);               
        }
        
            Serial.print("\n");
    }
     Serial.print("\n\n");
}

void encender (int numeros[lin][col], int led[lin][col])
{
    for (int i=0;i<lin;i++)
    {
        for(int j=0;j<col;j++)
        {
            if (numeros[i][j]==1)
            {
                digitalWrite(led[i][j],HIGH);
            }
            else digitalWrite(led[i][j],LOW);
        }
    }
}
void analisis (int numeros[lin][col])
{
    if((numeros[0][0]==1 and numeros[0][1]==1 and numeros[0][2]==1)or(numeros[1][0]==1 and numeros[1][1]==1 and numeros[1][2]==1)or(numeros[2][0]==1 and numeros[2][1]==1 and numeros[2][2]==1))
    {
        lcd.print("BINGO");
        Serial.print("Gano");
    }
    else lcd.print("PERDEDOR");
}




void loop() {
  lcd.clear();
  ingreso(numeros,led);
  encender(numeros,led);
  analisis(numeros);
  
  delay(5000);
}
