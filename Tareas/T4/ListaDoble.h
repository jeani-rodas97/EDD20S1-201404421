#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class ListaDoble
{
    public:
        int cantidad = 0;
        ListaDoble();
        bool Vacia();
        void InsertarPrimero(char c);
        void Mostrar();
        void EliminarUltimo();
        bool Buscar(string s);

    protected:

    private:
        Nodo *Primero;
        Nodo *Ultimo;
};

#endif // LISTADOBLE_H
