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

int mayor (int numero[])
{
    int i;
    int auxmayor=0;
    for (i=0;i<5;i++)
    {
        if (auxmayor<numero[i])
            {auxmayor=numero[i];}
    }
    return auxmayor;
}

int menor (int numero[])
{
    int i;
    int auxmenor=numero[0];
    for (i=0;i<5;i++)
    {
        if (auxmenor>numero[i])
            auxmenor=numero[i];
    }
    return auxmenor;
}
int main()
{
    arreglo(numero);
    cout<<"Numero Mayor es..."<<mayor(numero)<<"\n";
    cout<<"Numero menor es..."<<menor(numero)<<"\n";

    return 0;
}
