#include "Nodo.h"

Nodo::Nodo(char letra)
{
    this->letra = letra;
    this->sig = 0;
    this->ant = 0;
}
