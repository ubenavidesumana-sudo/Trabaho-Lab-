#include "Platillo.h"

Platillo::Platillo(int codigo, string nombre, double precio) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->precio = precio;
}

Platillo::~Platillo(){
	
}

void Platillo::setCodigo(int codigo){
	this->codigo = codigo;
}
void Platillo::setNombre(string nombre){
	this->nombre = nombre;
}
void Platillo::setPrecio(double precio){
	this->precio = precio;
}

int Platillo::getCodigo(){
	return codigo;
}
string Platillo::getNombre(){
	return nombre;
}
double Platillo::getPrecio(){
	return precio;
}








