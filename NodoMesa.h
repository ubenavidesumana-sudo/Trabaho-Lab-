#ifndef NODOMESA_H
#define NODOMESA_H

#include "Mesa.h"

class NodoMesa {
private:
	Mesa* mesa;
	NodoMesa* siguiente;
	
public:
	NodoMesa(Mesa* mesa);
	~NodoMesa();
	
	Mesa* getMesa();
	NodoMesa* getSiguiente();
	
	void setSiguiente(NodoMesa* sig);
};

#endif
