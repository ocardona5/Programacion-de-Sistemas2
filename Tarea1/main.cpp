#include <iostream>

using namespace std;

int main()
{
       int c =1;
    int numero = 0;
    int mayor = 0;
    int n1 = 0;
    int n2= 0;
    int n3= 0;
    while (c<=10){
        cout<<"Ingrese #" << c<< "...";
        cin>> numero;
        if ((numero>=1) && (numero<=50)){
            n1++;
            if (numero>mayor){
                mayor = numero;
            }
        }
        else if ((numero>=51) && (numero<=80)){
            n2++;
            if (numero>mayor){
                mayor = numero;
            }
        }
        else {
            n3++;
            if (numero>mayor){
                mayor = numero;
            }
        }
       c++;
    }
    cout<<"Hubieron "<<n1<< " numeros entre 1 y 50. \n\n";
    cout<<"Hubieron "<<n2<< " numeros entre 51 y 80. \n\n";
    cout<<"Hubieron "<<n3<< " numeros mayores que 80.\n\n";
    cout<<"El numero mayor fue: "<<mayor<<"\n\n";
    return 0;

}
