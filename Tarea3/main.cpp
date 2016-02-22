#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char resp;
    int num=0,i;
    do{
            do{
                cout<<"Ingresar un numero entre 5 y 10...:";
                cin>>num;
                }while (!(num>=5 and num<=10));
    for (i=1;i<=10;i++)
    {
        cout<< num<< " x "<< i<<" = "<< num*i<<"\n";
    }
    _flushall();
    do
    {
        cout<<"Desea Continuar?..";
        cin.get(resp);
        _flushall();
    }while ((toupper(resp)!='S') and (toupper(resp)!='N'));
    }while ((toupper(resp)=='S'));
    return 0;
}
