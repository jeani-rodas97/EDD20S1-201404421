#include <iostream>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

int main()
{
    Lista lis;
    cout << lis.Vacia() << endl;
    lis.InsertarInicio(5, "Ale");
    lis.InsertarInicio(15, "Jean");
    lis.InsertarInicio(20, "Aleja");
    lis.Vacia();
    cout << lis.Mostrar()<< endl;
    cout << lis.Buscar(15);
    return 0;
}
