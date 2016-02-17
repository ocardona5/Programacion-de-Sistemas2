#include <iostream>

using namespace std;

int main()
{
 int c=0; int numero;int suma=0;
 int mayor=0;
 int promedio =0;
 while (c<5)
    {c++;
 cout<<"numero # "<< c << "\n";
 cin >> numero;
 suma=suma+numero;
 if (numero>mayor)
 {
     mayor=numero;
 }
    }
    promedio = suma/c;
 cout<<"numero mayor es"<<mayor<<"\n";
 cout<<"suma de los numero es " <<suma<<"\n";
 cout<<"final del ciclo\n";

    return 0;
}

