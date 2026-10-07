#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
#include <string>

using namespace std;

class Mesa;

class Factura {
private:
    int numeroFactura;
    string horaEmision;
    double total;
    Mesa* mesa;

public:
    Factura(int numero, string hora, double total, Mesa* mesa);
    ~Factura();

    int getNumeroFactura();
    string getHoraEmision();
    double getTotal();
    Mesa* getMesa();

    void setTotal(double total);
};

#endif
