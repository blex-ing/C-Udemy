#include <iostream>

using namespace std;

int main()
{
    const int estimate_expiry {30}; //day
    const double price_room {32.5};

    cout << "Hola Frank CCS" << endl;
    cout << "¿Cuantas habitaciones limpiaras? ";
    int num_of_rooms {0};
    cin >> num_of_rooms;

    cout << "\nValor estimado del servicio"<< endl;
    cout << "Numero de Habitaciones: " << num_of_rooms << endl;
    cout << "Precio habitacion: $" << price_room << endl;
    cout << "Cost: $" <<price_room * num_of_rooms << endl;
    cout << "Tax: $" << price_room * num_of_rooms * 0.06 << endl;
    cout << "========================"<< endl;
    cout << "Total estimado: $" << (price_room * num_of_rooms) + (price_room * num_of_rooms * 0.06) << endl;
    cout << "Estimacion valida para " << 40 << " days" << endl;

    return (0);   
} // namespace std
