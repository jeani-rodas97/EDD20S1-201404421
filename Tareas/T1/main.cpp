#include <iostream>

using namespace std;

int main()
{
    int cant;
    cout << "Ingrese cantidad de M: " << endl;
    cin >> cant;
    for(int i = 1; i <= cant; i++)
    {
        cout << "1";
    }
    cout << endl;
    for (int j = 1; j < cant -1 ; j++)
    {
        cout << "1";
        for (int esp = 2 ; esp < cant; esp++)
        {
            cout << " ";
        }
        cout << "1" << endl;
    }
    for(int i = 1; i <= cant; i++)
    {
        cout << "1";
    }
    cout << endl;
    return 0;
}
