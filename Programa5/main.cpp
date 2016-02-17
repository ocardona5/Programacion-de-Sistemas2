#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1;
    printf("                                     BIENVENIDO A MI PROGRAMA \n");
    printf("Ingresar el numero:\n");
    scanf("%d", &num1);
    if (num1==0)
    {
        printf("EL numero es igual a cero\n");
    }
    else if (num1>0)
    {
        printf("El numero es Positivo\n");
    }
    else
    {
        printf("El numero es Negativo\n");
    }
    system("PAUSE");
    return 0;
}
