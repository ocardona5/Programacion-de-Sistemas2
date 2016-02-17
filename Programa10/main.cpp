#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    int n,numero;
    cout <<"Ingrese numero de veces....:";
    cin >>n;
    for (int i=1;i<=n;i++)
    {
        numero =1 + rand() % (100-1);
        cout <<"Valores de i es: "<<i<<"   "<<"Valor de Numero: "<<numero<<"\n";
    }
    return 0;
}
