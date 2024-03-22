#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(int d, int m, int a){
    dia = d;
    mes = m;
    anio = a;
}

Fecha::~Fecha()
{
    //dtor
}
void Fecha::mostrarFecha(){
    cout << this->dia << "/" <<this->mes << "/" << this->anio;
}

