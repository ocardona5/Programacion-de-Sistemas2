#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int numero[4];
int xmenor;

void ingresa(int numero[]){
    for (int i=0;i<5;i++)
    {
        do
        {
            cout<<"Ingresar # "<<i+1<<": ";
            cin>>numero[i];
            _flushall();
        }while (!((numero[i]>50) && (numero[i]%2==0)));
    }
}
int mayor(int numero[]){
    int xmayor=0;
    for (int i=0;i<5;i++)
    {
        if (numero[i]>xmayor)
        {
            xmayor=numero[i];
        }
    }
    return xmayor;
}

int promedio(int numero[]){
    int prom=0,suma=0,x=0;
    for (int i=0;i<5;i++)
    {
        if (numero[i]%5==0)
        {
            x++;
            suma+=numero[i];
        }
    }
    if(x>0)
    {
        prom=suma/x;
    }
    return prom;
}


void menor(int numero[], int &xmenor)
{
    for (int i=0;i<5;i++)
    {
        if (numero[i]<xmenor)
        {
            xmenor=numero[i];
        }
    }
}

int main()
{
    ingresa(numero);
    menor(numero,xmenor);
    int numayor=mayor(numero);
    int prom=promedio(numero);
    int numenor=xmenor;
    cout<<"Numero Mayor es: "<<numayor<<"\n";
    cout<<"Promedio de Divi 5: "<<prom<<"\n";
    cout<<"Numero menor es: "<<numenor<<"\n";
}
