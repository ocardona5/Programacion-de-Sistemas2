#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct datost {
    char vehiculo[30];
    double velocidad1;
    double velocidad2;
    double velocidad3;
    double mayor;
    double menor;
}

datost dato[4];

void ingresar (datost dato[])
{
    for(int i=0;i<4;i++)
    {
        cout<<"Ingresar Vehiculo: ";
        cin.getline(dato.vehiculo,30);
        cout<<"Velocidad 1: ";
        cin>>dato.velocidad1;
        cout<<"Velocidad 2: ";
        cin>>dato.velocidad2;
        cout<<"Velocidad 3: ";
        cin>>dato.velocidad3;
        _flushall();
    }
}
void calcular (datost dato[]){
    for (int i=0;i<4;i++)
    {
        switch (dato.mayor)
        {
            case
        }
    }
}

int main()
{

    return 0;
}
