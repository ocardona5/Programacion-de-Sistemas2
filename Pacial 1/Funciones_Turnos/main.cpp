#include <iostream>

using namespace std;

int horas,turno,pago;
char nombre[30];

void LecturaDatos(int &turno,int &horas,char nombre[])
{
    cout<<"Nombre ...:";
    cin.getline(nombre,30);
    cout<<"Ingrese Horas...:";
    cin>>horas;
    do{
    cout<<"Ingrese Turno...:";
    cin>>turno;
    }while (!(turno>=1 and turno<=3));
}
int pagoTotal(int &turno,int horas)
{
    int cpago;
    if (turno==1)
    {
        turno=100;
    }
    else if(turno==2)
    {
        turno=120;
    }
    else if(turno==3)
    {
        turno=150;
    }
    cpago=horas*turno;
    return cpago;
}


int main()
{
    LecturaDatos(turno,horas,nombre);
    pago=pagoTotal(horas,turno);
    cout<<"Pago....:"<<pago<<"\n";

}
