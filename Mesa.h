#ifndef MESA_H
#define MESA_H

#include <iostream>
#include <string>

#include "ListaPlatillo.h"

using namespace std;

class Mesa {
private:
	int numeroMesa;
	int capacidad;
	string meseroResponsable;
	ListaPlatillos* pedidos;
	
public:
	Mesa(int numero, int capacidad, string mesero);
	~Mesa();
	
	void agregarPlatillo(Platillo* platillo);
	void cancelarMesa();
	void mostrarPlatillos();
	
	int getNumeroMesa();
	int getCapacidad();
	string getMeseroResponsable();
	
	ListaPlatillos* getPedidos();
};

#endif
