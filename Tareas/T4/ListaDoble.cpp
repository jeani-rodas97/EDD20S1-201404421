#include <iostream>
#include <string.h>
#include "ListaDoble.h"
#include "Nodo.h"
using namespace std;

ListaDoble::ListaDoble()
{
    this->Primero = 0;
    this->Ultimo = 0;
}

bool ListaDoble::Vacia()
{
    if(Primero == 0)
        return true;
    else return false;
}

void ListaDoble::InsertarPrimero(char c)
{
    Nodo *nuevo = new Nodo(c);
    if(Primero == 0)
    {
        Primero = nuevo;
        Ultimo = nuevo;
    }
    else
    {
        nuevo->sig = Primero;
        Primero->ant = nuevo;
        Primero = nuevo;
    }
    cantidad++;
}

void ListaDoble::Mostrar()
{
    Nodo *temp = Primero;
    while(temp!=0)
    {
        cout<< temp->letra << endl;
        temp = temp->sig;
    }
}

void ListaDoble::EliminarUltimo()
{
    Nodo *temp = Ultimo;
    temp->ant->sig = 0;
    temp->ant = Ultimo;
    cantidad--;
}

void ListaDoble::Buscar(string s)
{
    int largo = 0;
    largo = s.length();

    char palabra[largo];
    strcpy(palabra,s.c_str()); ///Pasamos la palabra de string a char
    bool encontrado = false;
    Nodo *aux = Primero;
    Nodo *aux2 = aux;
    if(largo>cantidad)
        cout<<"Palabra demasiado grande"<<endl;
    else if (aux!=0)
    {
        if((aux->letra == palabra[0]))
        {
            for(int i = 1; i < largo; i++)
            {
                aux2 = aux2->sig;
                encontrado = (aux2->letra == palabra[i]);
            }
            if(encontrado = true)
                cout<<"Palabra encontrada, primera letra "<< aux->letra;
        }
        else
            aux = aux->sig;
    }
    else
        cout<<"Palabra no encontrada"<<endl;


}

