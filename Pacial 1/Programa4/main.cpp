#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1, num2;
    printf("Ingresar el Primer numero:\n ");
    scanf("%d", &num1);
    printf("Ingresar el Segundo numero:\n ");
    scanf("%d", &num2);
    if (num1>num2)
    {
        printf("El Primer Numero es el mayor: %d \n", num1);
    }
    else
    {
        printf("El Segundo Numero es el mayor: %d \n", num2);
    }
    system("PAUSE");
    return 0;
}
