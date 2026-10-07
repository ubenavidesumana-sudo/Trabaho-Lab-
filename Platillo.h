#ifndef PLATILLO_H
#define PLATILLO_H
#include <iostream>
#include <sstream>

using namespace std;

class Platillo {
public:
	
	Platillo(int codigo, string nombre, double precio);
	~Platillo();
	
	void setCodigo(int codigo);
	void setNombre(string nombre);
	void setPrecio(double precio);
	
	int getCodigo();
	string getNombre();
	double getPrecio();
	
	
private:
	int codigo;
	string nombre;
	double precio;
};

#endif

