#include "ListaFacturas.h"
#include "Mesa.h"

#include <iostream>

using namespace std;

ListaFacturas::ListaFacturas() {

    cabeza = NULL;
    tamano = 0;
}

ListaFacturas::~ListaFacturas() {

    NodoFactura* actual = cabeza;

    while (actual != NULL) {

        NodoFactura* aux = actual->getSiguiente();

        delete actual;

        actual = aux;
    }

    cabeza = NULL;
    tamano = 0;
}

void ListaFacturas::insertar(Factura* factura) {

    NodoFactura* nuevo = new NodoFactura(factura);

    if (cabeza == NULL) {

        cabeza = nuevo;
    }
    else {

        NodoFactura* actual = cabeza;

        while (actual->getSiguiente() != NULL) {
            actual = actual->getSiguiente();
        }

        actual->setSiguiente(nuevo);
    }

    tamano++;
}

Factura* ListaFacturas::buscar(int numero) {

    NodoFactura* actual = cabeza;

    while (actual != NULL) {

        if (actual->getFactura()->getNumeroFactura() == numero) {
            return actual->getFactura();
        }

        actual = actual->getSiguiente();
    }

    return NULL;
}

void ListaFacturas::eliminar(int numero) {

    if (cabeza == NULL) {
        return;
    }

    NodoFactura* actual = cabeza;
    NodoFactura* anterior = NULL;

    while (actual != NULL) {

        if (actual->getFactura()->getNumeroFactura() == numero) {

            if (anterior == NULL) {
                cabeza = actual->getSiguiente();
            }
            else {
                anterior->setSiguiente(actual->getSiguiente());
            }

            delete actual;

            tamano--;

            return;
        }

        anterior = actual;
        actual = actual->getSiguiente();
    }
}

bool ListaFacturas::estaVacia() {
    return cabeza == NULL;
}

int ListaFacturas::getTamano() {
    return tamano;
}

void ListaFacturas::imprimirFacturas() {

    if (estaVacia()) {

        cout << "No hay facturas emitidas." << endl;
        return;
    }

    NodoFactura* actual = cabeza;

    while (actual != NULL) {

        Factura* f = actual->getFactura();

        cout << "Factura: " << f->getNumeroFactura()
             << " | Hora: " << f->getHoraEmision()
             << " | Total: " << f->getTotal()
             << " | Mesa: ";

        if (f->getMesa() != NULL) {
            cout << f->getMesa()->getNumeroMesa();
        }
        else {
            cout << "Sin mesa";
        }

        cout << endl;

        actual = actual->getSiguiente();
    }
}
