#include <iostream>

using namespace std;
int numero;
int main()
{
    cout <<"Ingrese un numero...";
    cin >> numero;
    if ((numero>=1)and (numero<=50))
    {
        cout << "Numero esta entre 1-50";
    }
    else if ((numero>=51)and (numero<=100))
    {
        cout << "Numero esta entre 1-50";
    }
    else if ((numero>100))
    {
        cout << "Numero esta entre 1-50";
    }
    else
    {
        cout << "NUmero es Negativo";
    }
    return 0;
}
