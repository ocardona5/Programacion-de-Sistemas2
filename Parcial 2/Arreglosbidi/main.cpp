#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int lin=4;
const int col=3;

int num[lin][col];

void ingreso (int num[lin][col]){
    srand(time(0));
    for (int l=0;l<(lin-1);l++)
    {
        for (int c=0;c<col;c++)
        {
            num[l][c]= 1 + rand() %(100-1);
        }
    }
}
void ingreso2 (int num[lin][col]){

    for (int l=0;l<(lin-1);l++)
    {
        for (int c=0;c<col;c++)
        {
            cout<<"Numero ["<<l<<"]["<<c<<"]: ";
            cin>>num[l][c];
        }
    }
}
void SumaColumnas (int num[lin][col]){
    int ult=lin-1;
    for (int c=0;c<col;c++)
    {
        for (int l=0;l<(lin-1);l++)
        {
            num[ult][c] += num[l][c];
        }

    }
}

void Presentar (int num[lin][col]){

    for (int l=0;l<(lin);l++)
    {
        for (int c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    ingreso(num);
    SumaColumnas(num);
    Presentar(num);

}
