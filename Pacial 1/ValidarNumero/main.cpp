#include <iostream>

using namespace std;

int main()
{
    int numero;
    for (int i=1;i<=5;i++)
    {
    do
    {
        cout<<"Ingresar numero 50-100..:";
        cin>>numero;
    }while(!(numero>=50 and numero<=100));
    cout <<"#"<<i<<" Numero correcto "<< numero<<"\n";
    }
    return 0;
}
