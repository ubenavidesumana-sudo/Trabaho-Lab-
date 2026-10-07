#include "ListaPlatillo.h"
#include <iostream>

using namespace std;

ListaPlatillos::ListaPlatillos() {
	cabeza = NULL;
	tamano = 0;
}

ListaPlatillos::~ListaPlatillos() {
	eliminarTodos();
}

void ListaPlatillos::insertar(Platillo* p) {
	
	NodoPlatillo* nuevo = new NodoPlatillo(p);
	
	if (cabeza == NULL) {
		cabeza = nuevo;
	}
	else {
		NodoPlatillo* actual = cabeza;
		
		while (actual->getSiguiente() != NULL) {
			actual = actual->getSiguiente();
		}
		
		actual->setSiguiente(nuevo);
	}
	
	tamano++;
}

void ListaPlatillos::eliminarTodos() {
	
	NodoPlatillo* actual = cabeza;
	
	while (actual != NULL) {
		
		NodoPlatillo* aux = actual->getSiguiente();
		
		delete actual;
		
		actual = aux;
	}
	
	cabeza = NULL;
	tamano = 0;
}

bool ListaPlatillos::estaVacia() {
	return cabeza == NULL;
}

int ListaPlatillos::getTamano() {
	return tamano;
}

double ListaPlatillos::calcularTotal() {
	
	double total = 0;
	
	NodoPlatillo* actual = cabeza;
	
	while (actual != NULL) {
		
		total += actual->getPlatillo()->getPrecio();
		
		actual = actual->getSiguiente();
	}
	
	return total;
}

void ListaPlatillos::imprimirPlatillos() {
	
	if (estaVacia()) {
		cout << "No hay platillos en la mesa." << endl;
		return;
	}
	
	NodoPlatillo* actual = cabeza;
	
	while (actual != NULL) {
		
		Platillo* p = actual->getPlatillo();
		
		cout << "Codigo: " << p->getCodigo()
			<< " | Nombre: " << p->getNombre()
			<< " | Precio: " << p->getPrecio()
			<< endl;
		
		actual = actual->getSiguiente();
	}
}
