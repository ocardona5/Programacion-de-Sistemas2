#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char resp;
    int num=0,suma=0,contador=0, promedio=0,mayor=0,contarp=0;
    do{
        do
        {
            cout<<"Ingrese un numero entre 50 y 100...:";
            cin >> num;

        }while (!(num>=50 and num<=100));
            if (num>mayor)
            {
                mayor=num;
            }
        if(num>=80 and num<=100)
            {
                contador++;
                suma+=num;
            }

        if ((num%2)==0){
            contarp++;
        }
        _flushall();

        do
        {
            cout<<"Desea continuar..:";
            cin.get(resp);
            _flushall();
        }while ((toupper(resp)!='S') && (toupper(resp)!='N'));

    }while (toupper(resp)=='S');

            if (contador>0)
            {
                promedio=suma/contador;

            }else {promedio =0;}

            cout<<"Promedio..: " <<promedio<<"\n";
            cout<<"Numero Mayor..: " <<mayor<<"\n";
            cout<<"Numeros Pares..: " <<contarp<<"\n";

    return 0;
}
