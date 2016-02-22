#include <iostream>

using namespace std;

int main()
{
    int numero,suma1=0,suma2=0,suma3=0;
    int p1=0,p2=0,p3=0,ran1=0,ran2=0,ran3=0;
    int nmayor=0, nmenor=1000000, c=1;
    while (c<=5)
    {
        cout<<"Ingresar Numero...>";
        cin >>numero;
        if (numero>=1 and numero<=50)
        {
            ran1++;
            suma1+=numero;
        }
        else if (numero>=51 and numero<=100)
        {
            suma2+=numero;
            ran2++;
        }
        else if (numero>=101)
        {
            ran3++;
            suma3+=numero;
        }

                if (numero>nmayor)
                {
                    nmayor=numero;
                }
                    if (numero<nmenor)
                    {
                        nmenor=numero;
                    }

                        c++;
    }
    if (ran1>0)
    {
    p1=suma1/(ran1);
    }
    else
    {p1=0;
}
    if (ran2>0)
    {
    p2=suma2/(ran2);
    }
    else
    {
        p2=0;
    }
    if (ran3>0)
    {
    p3=suma3/(ran3);
    }
    else{ p3=0;
    }
    cout<<"Numero Mayor es>> " <<nmayor<<"\n";
    cout<<"Numero Menor es>> " <<nmenor<<"\n";
    cout<<"El Promedio de 1-50 es>> " <<p1<<"\n";
    cout<<"El Promedio de 50-100 es>> " <<p2<<"\n";
    cout<<"El Promedio de >101 es>> " <<p3<<"\n";
    return 0;
}
