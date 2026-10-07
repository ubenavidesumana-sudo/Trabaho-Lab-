
#include "Factura.h"
#include "Mesa.h"

Factura::Factura(int numero, string hora, double total, Mesa* mesa) {

    numeroFactura = numero;
    horaEmision = hora;
    this->total = total;
    this->mesa = mesa;
}

Factura::~Factura() {
}

int Factura::getNumeroFactura() {
    return numeroFactura;
}

string Factura::getHoraEmision() {
    return horaEmision;
}

double Factura::getTotal() {
    return total;
}

Mesa* Factura::getMesa() {
    return mesa;
}

void Factura::setTotal(double total) {
    this->total = total;
}
