#include "NodoFactura.h"

NodoFactura::NodoFactura(Factura* f) {

    factura = f;
    siguiente = NULL;
}

NodoFactura::~NodoFactura() {

    delete factura;
}

Factura* NodoFactura::getFactura() {
    return factura;
}

NodoFactura* NodoFactura::getSiguiente() {
    return siguiente;
}

void NodoFactura::setSiguiente(NodoFactura* sig) {
    siguiente = sig;
}
