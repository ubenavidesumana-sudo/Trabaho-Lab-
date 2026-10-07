#ifndef GESTORRESTAURANTE_H
#define GESTORRESTAURANTE_H

#include "ListaMesas.h"
#include "ListaFacturas.h"

#include  <string>

using namespace std;

class Mesa;
class Platillo;
class Factura:
	
class GestorRestaurante {
public:
	GestorRestaurante();
	~GestorRestaurante();
	
	Mesa* abrirMesa(int numero, int capacidad, string mesero);
	
	bool agregarPlatilloMesa(int numeroMesa, Platillo* platillo);
	Factura* emitirFactura(int numeroMesa, int numeroFactura);
	void imprimirPlatillosDeMesa(int numeroMesa);
	ListaMesas* getMesasActivas();
	ListaFacturas* getFacturasEmitidas();
private:
	ListaMesas* mesasActivas;
	ListaFacturas* facturasEmitidas;
};

#endif
