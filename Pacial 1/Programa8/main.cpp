#include <iostream>

using namespace std;
int notae,nota,notaf;
int main()
{

    cout <<"Ingresar nota acumulada: ";
    cin >> nota;
    cout <<"Ingresar nota Examen: ";
    cin >> notae;
    notaf=notae+nota;
    if ((notaf>=57)and (notaf<=59))
    {
        notaf=60;
        cout<<notaf << " Aprobado\n";
    }
    else if((notaf>=0)and (notaf<=56))
    {
        notaf=notaf;
        cout<<notaf << " Reprobado\n";
    }
    else
    {
        cout<<notaf << " Aprobado\n";
    }
    return 0;
}
