#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct alumno
{
    char nombre[30];
    int p1,p2,p3,promedio;
    char obs[15];
};
alumno alum[5];

void ingreso(alumno &alum){

    cout<<"Nombre del alumno: ";
    cin.getline(alum.nombre, 30);
    cout<<"Pacial 1: ";
    cin>>alum.p1;
    cout<<"Pacial 2: ";
    cin>>alum.p2;
    cout<<"Pacial 3: ";
    cin>>alum.p3;
    _flushall();
}
void ingresoArreglo(alumno alum[]){

    for (int i=0;i<5;i++){
        ingreso(alum[i]);
    }
}



void calcular(alumno &alum){
    alum.promedio=(alum.p1+alum.p2+alum.p3)/3;
    if(alum.promedio>=60)
    {
        strcpy(alum.obs,"Aprobado");
    }
    else strcpy(alum.obs,"Reprobado");
}
void CalcularArreglo(alumno alum[]){
    for (int i=0;i<5;i++){
        calcular(alum[i]);
    }
}

void presentar(alumno alum)
{
    cout<<"Alumno "<<alum.nombre<<" Nota: "<<alum.promedio<<"\nObservacion: "<<alum.obs<<"\n\n";
}

void presentarArreglo(alumno alum[]){
    for (int i=0;i<5;i++){
        presentar(alum[i]);
    }
}

int main()
{
    ingresoArreglo(alum);
    CalcularArreglo(alum);
    presentarArreglo(alum);
    return 0;
}
