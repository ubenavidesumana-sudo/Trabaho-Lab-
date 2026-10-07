#include "ListaMesa.h"
#include <iostream>

using namespace std;

ListaMesas::ListaMesas() {
	
	cabeza = NULL;
	tamano = 0;
}

ListaMesas::~ListaMesas() {
	
	NodoMesa* actual = cabeza;
	
	while (actual != NULL) {
		
		NodoMesa* aux = actual->getSiguiente();
		
		delete actual;
		
		actual = aux;
	}
	
	cabeza = NULL;
	tamano = 0;
}

void ListaMesas::insertar(Mesa* mesa) {
	
	NodoMesa* nuevo = new NodoMesa(mesa);
	
	if (cabeza == NULL) {
		
		cabeza = nuevo;
	}
	else {
		
		NodoMesa* actual = cabeza;
		
		while (actual->getSiguiente() != NULL) {
			actual = actual->getSiguiente();
		}
		
		actual->setSiguiente(nuevo);
	}
	
	tamano++;
}

Mesa* ListaMesas::buscar(int numero) {
	
	NodoMesa* actual = cabeza;
	
	while (actual != NULL) {
		
		if (actual->getMesa()->getNumeroMesa() == numero) {
			return actual->getMesa();
		}
		
		actual = actual->getSiguiente();
	}
	
	return NULL;
}

void ListaMesas::eliminar(int numero) {
	
	if (cabeza == NULL) {
		return;
	}
	
	NodoMesa* actual = cabeza;
	NodoMesa* anterior = NULL;
	
	while (actual != NULL) {
		
		if (actual->getMesa()->getNumeroMesa() == numero) {
			
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

bool ListaMesas::estaVacia() {
	return cabeza == NULL;
}

int ListaMesas::getTamano() {
	return tamano;
}

void ListaMesas::imprimirMesas() {
	
	if (estaVacia()) {
		
		cout << "No hay mesas activas." << endl;
		return;
	}
	
	NodoMesa* actual = cabeza;
	
	while (actual != NULL) {
		
		Mesa* m = actual->getMesa();
		
		cout << "Mesa: " << m->getNumeroMesa()
			<< " | Capacidad: " << m->getCapacidad()
			<< " | Mesero: " << m->getMeseroResponsable()
			<< endl;
		
		actual = actual->getSiguiente();
	}
}
