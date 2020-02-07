#include "Lista.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

void Lista::InsertarInicio(int Carnet, string Nombre)
{
    if (Primero = 0)
    {
        Primero = new Nodo(Carnet, Nombre);
        Primero->Carnet = Carnet;
        Primero->Nombre = Nombre;
        Primero->Siguiente = 0;
    }
    else
    {
        Nodo *nuevo = new Nodo(Carnet, Nombre);
        nuevo->Carnet = Carnet;
        nuevo->Nombre = Nombre;
        nuevo->Siguiente = this->Primero;
        Primero = nuevo;
    }
}

Lista::Mostrar()
{
    Nodo *temp = Primero;
    while(temp != 0)
    {
        cout << temp->Nombre << endl;
        temp = temp->Siguiente;
    }
}

bool Lista::Vacia()
{
    return Primero = 0;
}

string Lista::Buscar(int id)
{
    Nodo *aux = Primero;
    if(aux != 0)
    {
        if(aux->Carnet == id)
        {
            return aux->Nombre;
        }
        else
        {
            aux = aux->Siguiente;
        }
    }
    else
        return "No encontrado";
}

void Lista::Eliminar(int id)
{
    Nodo *aux = Primero;
    if(aux != 0)
    {
        if(aux->Carnet == id)
        {
            aux->Siguiente = 0;
        }
        else
        {
            aux = aux->Siguiente;
        }
    }
}
