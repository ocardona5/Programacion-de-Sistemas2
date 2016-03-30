#include <iostream>

using namespace std;
int turno;
double pago,ventas,comision,pcomision;
char nombre[30];

void LecturaDatos(int &turno,double &ventas,char nombre[])
{
    cout<<"Nombre ...:";
    cin.getline(nombre,30);
    cout<<"Ingrese Ventas...:";
    cin>>ventas;
    do{
    cout<<"Ingrese Turno...:";
    cin>>turno;
    }while (!(turno>=1 and turno<=3));
}
double comisionxturno(int turno)
{
    if (turno==1)
    { return 0.05;}
    else if(turno==2)
    {return 0.06;}
    else
    {return 0.04;}
}

void calcular(int turno,double ventas, double &comision,double &pcomision)
{
    pcomision=comisionxturno(turno);
    comision=pcomision*ventas;
}

int main()
{
    LecturaDatos(turno,ventas,nombre);
    calcular(turno,ventas,comision,pcomision);
    cout<<"Por de Comision....:"<<pcomision<<"\n";
    cout<<"Comision....:"<<comision<<"\n";
    return 0;
}

