#include <iostream>
//#include <ncurses.h>
#include "Nodo.h"
#include "ListaDoble.h"

using namespace std;

int main()
{
    ListaDoble lista;
    cout<< lista.Vacia() << endl;
    lista.InsertarPrimero('a');
    lista.InsertarPrimero('l');
    lista.InsertarPrimero('o');
    lista.InsertarPrimero('h');
    cout<< lista.Vacia() << " cantidad " << lista.cantidad << endl;
    lista.Mostrar();
    lista.Buscar("olacomo estas");
    lista.Buscar("ol");
    lista.EliminarUltimo();
    lista.Mostrar();
    cout << "cantidad " << lista.cantidad << endl;
    return 0;
}
