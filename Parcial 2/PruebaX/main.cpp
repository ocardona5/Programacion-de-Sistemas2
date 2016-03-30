#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int numeros[4];
int mayor=0;
int menor=150;

int numRandom (){
    int num=0;
    do
    {
        num=1+rand()%(150-1);

    }while (!((num>=50) and (num<=150)));
    return num;
}


void generar (int numeros[]){
    srand(time(0));

    for (int i=0; i<5; i++) {
        numeros[i] = numRandom();
    }
}

void mayorYmenor (int numeros[], int &mayor, int &menor){
    for (int i=0; i<5; i++) {
        if ((numeros[i]) > mayor){
            mayor = numeros[i];
        }
        if ((numeros[i]) < menor){
            menor = (numeros[i]);
        }
    }
}

void presentar(int numeros[]){
    for (int i=0; i<5; i++) {
        cout<<"Numero: "<<numeros[i]<< "\n";
    }

}


int main()
{
    generar(numeros);
    presentar(numeros);
    mayorYmenor(numeros,mayor,menor);
    cout<<"Mayor: "<<mayor<<"\n";
    cout<<"Menor: "<<menor<<"\n";
}
