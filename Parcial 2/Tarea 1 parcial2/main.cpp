#include <iostream>

using namespace std;

int numero[5];
void arreglo (int numero[])
{
    for (int i=0; i<5;i++)
    {
        cout<<"Ingresar Numero...";
        cin>>numero[i];
    }
    for (int i=0; i<5;i++)
    {
        cout<<"Numero..."<<numero[i]<<"\n";
    }

}

float promedio (int numero[])
{
    int i;
    float suma=0,cant2=0;
    float promedio=0;
    for (i=0;i<5;i++)
    {
        if ((numero[i]%2)==1)
       {
          suma+=numero[i];
        cant2++;
       }
    }
    if (cant2>0)
    promedio=suma/cant2;
    return promedio;
}

int rango (int numero[])
{
    int i;
    int cant=0;
    for (i=0;i<5;i++)
    {
        if ((numero[i]>=50 and numero[i]<=100))
            cant++;
    }
    return cant;
}
int main()
{
    arreglo(numero);
    cout<<"Numero Promedio es..."<<promedio(numero)<<"\n";
    cout<<"Numero Rango es..."<<rango(numero)<<"\n";

    return 0;
}
