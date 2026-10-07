#include "NodoMesa.h"

NodoMesa::NodoMesa(Mesa* mesa) {
	
	this->mesa = mesa;
	siguiente = NULL;
}

NodoMesa::~NodoMesa() {
	
	delete mesa;
}

Mesa* NodoMesa::getMesa() {
	return mesa;
}

NodoMesa* NodoMesa::getSiguiente() {
	return siguiente;
}

void NodoMesa::setSiguiente(NodoMesa* sig) {
	siguiente = sig;
}
