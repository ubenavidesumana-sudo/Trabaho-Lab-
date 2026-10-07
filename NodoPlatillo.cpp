#include "NodoPlatillo.h"

NodoPlatillo::NodoPlatillo(Platillo* p) {
	platillo = p;
	siguiente = NULL;
}

NodoPlatillo::~NodoPlatillo() {
	delete platillo;
}

Platillo* NodoPlatillo::getPlatillo() {
	return platillo;
}

NodoPlatillo* NodoPlatillo::getSiguiente() {
	return siguiente;
}

void NodoPlatillo::setSiguiente(NodoPlatillo* sig) {
	siguiente = sig;
}
