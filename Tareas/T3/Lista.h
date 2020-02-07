#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

class Lista
{
    public:
        Nodo *Primero = 0;
        void InsertarInicio(int Carnet, string Nombre);
        void Eliminar(int id);
        Mostrar();
        bool Vacia();
        string Buscar(int id);

    protected:

    private:
};

#endif // LISTA_H
