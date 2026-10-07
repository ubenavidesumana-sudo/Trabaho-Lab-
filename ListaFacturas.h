
#ifndef LISTAFACTURAS_H
#define LISTAFACTURAS_H

#include "NodoFactura.h"

class ListaFacturas {
private:
    NodoFactura* cabeza;
    int tamano;

public:
    ListaFacturas();
    ~ListaFacturas();

    void insertar(Factura* factura);
    Factura* buscar(int numero);
    void eliminar(int numero);

    bool estaVacia();
    int getTamano();

    void imprimirFacturas();
};

#endif
