#include <iostream>

using namespace std;

int numero[5];

void ingresar(int numero[])
{
    for (int i=0;i<5;i++){
    do{
    cout<<"Ingrese numero entre 1-10...:";
    cin>>numero[i];
    }while (!(numero[i]>=1 and numero[i]<=10));
    }
}
int factorial(int numero[])
{
    int xnfac=1;
    for (int i=numero[i];i>0;i--)
    {
        xnfac*=i;

    }
    return xnfac;
}

void proceso(int numero[])
{
    int facto;
    for (int i=0;i<5;i++)
    {
        facto=factorial(numero);
        cout<<"Factorial de "<<numero[i]<<" es "<<facto<<"\n";
    }

}


int main()
{

    ingresar(numero);
    proceso(numero);

}
