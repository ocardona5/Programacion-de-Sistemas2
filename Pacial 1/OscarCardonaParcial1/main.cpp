#include <iostream>

using namespace std;
int turno,horas,extras;
char nombre[30];
double pago,pextras,pnormales;

void datos(char nombre[],int &turno, int &horas, int &extras){
    cout<<"Nombre del Empleado..: ";
    cin.getline(nombre,30);
    cout<<"Ingrese las horas trabajadas..: ";
    cin>>horas;
    cout<<"Ingrese las horas extras trabajadas..: ";
    cin>>extras;
    do{
    cout<<"Ingrese el turno..: ";
    cin>>turno;
    }while (!(turno>=1 and turno<=4));
}
int PagoHorasN (int turno){
    if (turno==1 or turno==3)
    { return  200;  }
    if (turno==2 or turno==4)
    { return  300;  }

}
int PagoHorasX (int turno){
    if (turno==1 or turno==3)
    { return  250;  }
    if (turno==2 or turno==4)
    { return  350;  }

}
void Calcular (double &pago,int horas, int extras,double &pnormales,double &pextras){
    pnormales=((PagoHorasN(turno))*horas);
    pextras=((PagoHorasX(turno))*extras);
    pago=pnormales+pextras;
}

int main()
{
    datos(nombre,turno,horas,extras);
    Calcular(pago,horas,extras,pnormales,pextras);
    cout<<"Pago por hora Normal..:$"<<PagoHorasN(turno)<<"\n";
    cout<<"Pago por hora Extra..:$"<<PagoHorasX(turno)<<"\n";
    cout<<"Pago Normales..:$"<<pnormales<<"\n";
    cout<<"Pago Extras..:$"<<pextras<<"\n";
    cout<<"Pago total es..:$"<<pago<<"\n";
    return 0;
}
