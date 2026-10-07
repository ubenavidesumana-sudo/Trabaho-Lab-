#ifndef LISTAPLATILLOS_H
#define LISTAPLATILLOS_H

#include "NodoPlatillo.h"

class ListaPlatillos {
private:
	NodoPlatillo* cabeza;
	int tamano;
	
public:
	ListaPlatillos();
	~ListaPlatillos();
	
	void insertar(Platillo* p);
	void eliminarTodos();
	bool estaVacia();
	int getTamano();
	
	double calcularTotal();
	
	void imprimirPlatillos();
};

#endif
