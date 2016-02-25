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
    float suma;
    float promedio=0;
    for (i=0;i<5;i++)
    {
        suma+=numero[i];
    }
    promedio=suma/5;
    return promedio;
}

int pares (int numero[])
{
    int i;
    int cant=0;
    for (i=0;i<5;i++)
    {
        if ((numero[i]%2)==0)
            cant++;
    }
    return cant;
}
int main()
{
    arreglo(numero);
    cout<<"Numero Promedio es..."<<promedio(numero)<<"\n";
    cout<<"Numero Pares es..."<<pares(numero)<<"\n";

    return 0;
}

