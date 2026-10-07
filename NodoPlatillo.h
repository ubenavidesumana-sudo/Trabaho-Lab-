#ifndef NODOPLATILLO_H
#define NODOPLATILLO_H

#include "Platillo.h"

class NodoPlatillo {
private:
	Platillo* platillo;
	NodoPlatillo* siguiente;
	
public:
	NodoPlatillo(Platillo* p);
	~NodoPlatillo();
	
	Platillo* getPlatillo();
	NodoPlatillo* getSiguiente();
	
	void setSiguiente(NodoPlatillo* sig);
};

#endif
