#ifndef LISTAMESA_H
#define LISTAMESA_H

#include "NodoMesa.h"

class ListaMesa {
private:
	NodoMesa* cabeza;
	int tamano;
	
public:
	ListaMesa();
	~ListaMesa();
	
	void insertar(Mesa* mesa);
	Mesa* buscar(int numero);
	void eliminar(int numero);
	
	bool estaVacia();
	int getTamano();
	
	void imprimirMesas();
};

#endif
