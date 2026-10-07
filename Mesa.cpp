#include "Mesa.h"

Mesa::Mesa(int numero, int capacidad, string mesero) {
	
	numeroMesa = numero;
	this->capacidad = capacidad;
	meseroResponsable = mesero;
	
	pedidos = new ListaPlatillos();
}

Mesa::~Mesa() {
	delete pedidos;
}

void Mesa::agregarPlatillo(Platillo* platillo) {
	
	pedidos->insertar(platillo);
}

void Mesa::cancelarMesa() {
	
	pedidos->eliminarTodos();
}

void Mesa::mostrarPlatillos() {
	
	cout << "Platillos de la mesa " << numeroMesa << ":" << endl;
	
	pedidos->imprimirPlatillos();
}

int Mesa::getNumeroMesa() {
	return numeroMesa;
}

int Mesa::getCapacidad() {
	return capacidad;
}

string Mesa::getMeseroResponsable() {
	return meseroResponsable;
}

ListaPlatillos* Mesa::getPedidos() {
	return pedidos;
}
