#include <iostream>

using namespace std;

int na,ne,nf;
char nombre[30];

void LecturaDatos(int &na,int &ne,char nombre[])
{
    cout<<"Nombre del alumno...:";
    cin.getline(nombre,30);
    cout<<"Nota Acumulada...:";
    cin>>na;
    cout<<"Nota Examen...:";
    cin>>ne;
}
int notafinal(int na,int ne)
{
    int xnf;
    xnf=na+ne;
    return xnf;
}
void Estado(int nf)
{
    if (nf>=60)
    {
        cout<<"Aprobado \n";
    }
    else cout<<"Reprobado \n";
}
int main()
{
    LecturaDatos(na,ne,nombre);
    nf=notafinal(na,ne);
    cout<<"Nota Final...:"<<nf<<"\n";
    Estado(nf);
}
