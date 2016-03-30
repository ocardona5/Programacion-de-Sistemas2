#include <SoftwareSerial.h> 
#include <Servo.h>  
   
Servo servo1,servo2;
int posicion; 
SoftwareSerial BT(10,11); //10 RX, 11 TX.

int sala=4;
int cocina=5;
int room=6;
char cadena[255]; //Creamos un array de caracteres de 256 cposiciones
int i=0; //Tamaño actual del array
 
void setup()
{
  servo1.attach(2);
  servo1.attach(8);
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(sala,OUTPUT);
  pinMode(cocina,OUTPUT);
  pinMode(room,OUTPUT);
  servo1.write(0);
  servo2.write(0);
  
}
 
void loop()
{
  
  //Cuando haya datos disponibles
  if(BT.available())
  {
    char dato=BT.read(); //Guarda los datos carácter a carácter en la variable "dato"
 
    cadena[i++]=dato; //Vamos colocando cada carácter recibido en el array "cadena"
 
    //Cuando reciba una nueva línea (al pulsar enter en la app) entra en la función
    if(dato=='\n')
    {
      Serial.print(cadena); //Visualizamos el comando recibido en el Monitor Serial
      //PUERTA PRINCIPAL
      if(strstr(cadena,"p abierta")!=0)
      {
        posicion = 520;           
        posicion = map(posicion, 0, 1023, 0, 179);    
        servo1.write(posicion);
      }
      if(strstr(cadena,"p cerrada")!=0)
      {
        posicion = 0;           
        posicion = map(posicion, 0, 1023, 0, 179);    
        servo1.write(posicion);
      }
      ////////Puerta Trasera
      if(strstr(cadena,"t abierta")!=0)
      {
        posicion = 520;           
        posicion = map(posicion, 0, 1023, 0, 179);    
        servo2.write(posicion);
      }
      if(strstr(cadena,"t cerrada")!=0)
      {
        posicion = 0;           
        posicion = map(posicion, 0, 1023, 0, 179);    
        servo2.write(posicion);
      }
      
      //GREEN LED
      if(strstr(cadena,"on sala")!=0)
      {
        digitalWrite(sala,HIGH);
      }
      if(strstr(cadena,"off sala")!=0)
      {
        digitalWrite(sala,LOW);
      }
      //YELLOW LED
      if(strstr(cadena,"on cocina")!=0)
      {
        digitalWrite(cocina,HIGH);
      }
      if(strstr(cadena,"off cocina")!=0)
      {
        digitalWrite(cocina,LOW);
      }
      //RED LED
      if(strstr(cadena,"led sala")!=0)
      {
        digitalWrite(room,HIGH);
      }
      if(strstr(cadena,"red off")!=0)
      {
        digitalWrite(room,LOW);
      }
      //ALL ON
      if(strstr(cadena,"on all")!=0)
      {
        digitalWrite(sala,HIGH);
        digitalWrite(cocina,HIGH);
        digitalWrite(room,HIGH);
      }
      //ALL OFF
      if(strstr(cadena,"off all")!=0)
      {
        digitalWrite(sala,LOW);
        digitalWrite(cocina,LOW);
        digitalWrite(room,LOW);
      }
 
      BT.write("\r"); //Enviamos un retorno de carro de la app. La app ya crea una línea nueva
      clean(); //Ejecutamos la función clean() para limpiar el array
    }
  }
}
 
//Limpia el array
void clean()
{
  for (int cl=0; cl<=i; cl++)
  {
    cadena[cl]=0;
  }
  i=0;
}

