#include "Nodo.h"
#include <iostream>

Nodo::Nodo(int Carnet, string Nombre, Nodo *sig)
{
    this->Carnet = Carnet;
    this->Nombre = Nombre;
    this->Siguiente = sig;
}
