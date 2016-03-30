#include <iostream>

using namespace std;

int numero[5];
void ingresar (int numero[])
{
    for (int i=0; i<5;i++)
    {
        cout<<"Ingresar Numero...";
        cin>>numero[i];
    }
}
int impares (int numero[])
{
    int cant1=0;
    for (int i=0;i<5;i++){
        if ((numero[i]%2)==1)
           {
            cant1++;
           }
    }
       return cant1;
}
int mayores (int numero[])
{
    int cant1=0;
    for (int i=0;i<5;i++){
        if ((numero[i])>100)
           {
            cant1++;
           }
    }
       return cant1;
}
int pares (int numero[])
{
    int cant2=0;
    for (int i=0;i<5;i++){
 if ((numero[i]%2)==0)
       {
        cant2++;
       }
 }      return cant2;

}
int main()
{
    ingresar(numero);
    cout<<"Impares..."<<impares(numero)<<"\n";
    cout<<"Par..."<<pares(numero)<<"\n";
    cout<<"Mayores a 100..."<<mayores(numero)<<"\n";
    return 0;
}
