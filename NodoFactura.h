#ifndef NODOFACTURA_H
#define NODOFACTURA_H

#include "Factura.h"

class NodoFactura {
private:
    Factura* factura;
    NodoFactura* siguiente;

public:
    NodoFactura(Factura* f);
    ~NodoFactura();

    Factura* getFactura();
    NodoFactura* getSiguiente();

    void setSiguiente(NodoFactura* sig);
};

#endif
