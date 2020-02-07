#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;
class Nodo
{
    public:
        int Carnet;
        string Nombre;
        Nodo *Siguiente;
        Nodo(int Carnet, string Nombre, Nodo *sig = 0);
    protected:

    private:
};

#endif // NODO_H
