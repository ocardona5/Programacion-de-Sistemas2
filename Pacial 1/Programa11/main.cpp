#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    int promedio=0,numeromayor=0,suma=0,numero=0;
    for (int i=1;i<=10;i++)
    {
        numero =30 + rand() % (80-30);
        cout<<"Valor #" <<i<<"..:"<<numero<<"\n";
        if (numero>numeromayor)
        {
            numeromayor=numero;
        }
        suma+=numero;
    }
        promedio=suma/10;
        cout <<"El numero mayor es..:"<<numeromayor<<"\n";
        cout <<"El Promedio es..:"<<promedio<<"\n";
    return 0;
}
