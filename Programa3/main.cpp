#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double ne,na,nf;
    printf("Ingrese la nota de acumulados: \n");
    scanf("%lf", &na);
    printf("Ingrese la nota de Examen: \n");
    scanf("%lf", &ne);
    na=na*0.3;
    ne=ne*0.7;
    nf=na+ne;

    if (nf>=60)
    {
        printf("Estado de la nota: Apr\n");
    }
    else
    {
        printf("Estado de la nota: Rep\n");
    }

    printf("Nota Final es %lf \n\n", nf);
    system("PAUSE");

    return 0;
}
