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

bool ListaDoble::Buscar(string s)
{
    cout<<"Palabra a buscar " << s << endl;
    int largo = s.length();
    char palabra[largo];
    strcpy(palabra,s.c_str()); ///Pasamos la palabra de string a char
    bool encontrado = false;
    Nodo *aux = Primero;
    if(largo>cantidad)
    {
        cout<<"Palabra demasiado grande"<<endl;
        return false;
    }
    else
    {
        while(aux!=0)
        {
            cout<< "comparando letra de la lista " << aux->letra << " Con la letra " << palabra[0] << endl;
            Nodo *aux2 = aux;
            if((aux->letra == palabra[0]))
            {
                encontrado = true;
                while(encontrado = true)
                {
                    cout<< "letra de la lista " << aux->letra << "coincide con " << palabra[0] << endl;
                    for(int i = 1; i < largo; i++)
                    {
                        aux2 = aux2->sig;
                        encontrado = (aux2->letra = palabra[i]);
                        cout<< encontrado << " Con letra " << aux2->letra << palabra[i]<< endl;
                    }
                    cout<<"Palabra encontrada, primera letra "<< aux->letra<< endl;
                    return true;
                }
            }
            else
                aux = aux->sig;
        }
    }

}

