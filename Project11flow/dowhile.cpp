#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char    option {};

    do
    {
        cout << "\n---------------------" << endl;
        cout << "Menu de opciones:" << endl;
        cout << "1. Agregar un elemento al vector." << endl;
        cout << "2. Mostrar todos los elementos del vector." << endl;
        cout << "3. Buscar un elemento en el vector." << endl;
        cout << "Q. Quit" << endl;
        cin >> option;
        
    } while (option != 'q' && option != 'Q');
    

}