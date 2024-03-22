#include "Prestamo.h"
#include "Cliente.h"
#include "Pago.h"
#include "Fecha.h"
#define DIMP 5

Prestamo::Prestamo()
{
    //ctor
}

Prestamo::Prestamo(int np, Cliente *cli, Fecha *fa, float ma){
    numeroPrestamo = np;
    cliente = cli;
    fechaAprobacion = fa;
    montoAprobado = ma;
    saldoPendiente = ma;
}

Prestamo::~Prestamo()
{
    //dtor
}

int Prestamo::getNumeroPrestamo(){
    return this->numeroPrestamo;
}
void Prestamo::setNumeroPrestamo(int np){
    this->numeroPrestamo = np;
}
Cliente *Prestamo::getCliente(){
    return this->cliente;
}
void Prestamo::setCliente(Cliente *cli){
    cliente = cli;
}
void Prestamo::setFechaAprobacion(Fecha *fa){
    fechaAprobacion = fa;
}
Fecha *Prestamo::getFechaAprobacion(){
    return this->fechaAprobacion;
}
void Prestamo::setMontoAprobado(float ma){
    montoAprobado = ma;
}
float Prestamo::getMontoAprobado(){
    return this->montoAprobado;
}
bool Prestamo::hacerPago(Pago *pg){
    bool retorno = false;
    if(this->contadorPagos < DIMP){
        this->lstPagos[this->contadorPagos] = pg;
        this->contadorPagos++;
        this->saldoPendiente -= pg->getMontoPago();
        retorno = true;
    }
    return retorno;
}
Pago **Prestamo::getLstPagos(){
    return this->lstPagos;
}
float Prestamo::getSaldoPendiente(){
    return this->saldoPendiente;
}
int Prestamo::getcontadorPagos(){
    return this->contadorPagos;
}
