#include "Cliente.h"


Cliente::Cliente(int idc, string n, string a){
    idCliente = idc;
    nombre = n;
    apellido = a;
}

Cliente::~Cliente()
{
    //dtor
}
int Cliente::getIdCliente(){
    return this->idCliente;
}
string Cliente::getNombre(){
    return this->nombre;
}
string Cliente::getApellido(){
    return this->apellido;
}
