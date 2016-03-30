#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lin=4;
const int col=4;

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
void Promedio(int num[][col]){
    int ul=lin-1;

    for (int c=0;c<col;c++)
    {
        int x=0;
        for (int l=0;l<lin-1;l++)
        {
            if((num[l][c])%2==0)
               {
                    (num[ul][c])+=num[l][c];
                    x++;
               }

        }
        if(x>0)
        (num[ul][c])=((num[ul][c])/x);
    }
}



void Presentar (int num[lin][col]){

    for (int l=0;l<lin;l++)
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
    Promedio(num);
    Presentar(num);
}
