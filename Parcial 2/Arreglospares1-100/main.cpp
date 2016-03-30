#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int pares[10];

int NumRandom()
{

    int num=0;
    do
    {
        num=1+rand()%(100-1);

    }while (!((num%2==0) and (num<=100)));
    return num;
}
void generar (int pares[])
{
    srand(time(0));
    for (int i=1;i<=10;i++)
    {
        pares[i]=NumRandom();
    }
}
void Presentar(int pares[])
{
    for (int i=1;i<=10;i++)
    {
        cout<<"Numero "<<i<<" : "<<pares[i]<<"\n";
    }

}
int contar (int pares[])
{
    int c=0;
    for (int i=1;i<=10;i++)
    {
        if(pares[i]>=50) c++;

    }
    return c;
}


int main()
{
    NumRandom();
    generar(pares);
    Presentar(pares);
    cout<<"Numero >50..."<<contar(pares)<<"\n";
}
