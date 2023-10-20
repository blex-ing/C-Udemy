#include <iostream>
#include <string>
using namespace std;

int main ()
{
    //crea siete variables de tipo string formato s0, s1, ..s6
    string s0 ;
    string s1 {"Mundo"};
    string s2 {"C++"};
    string s3 {"Programacion"};
    string s4 {"Orientada"};
    string s5 {s1};
    string s6 {s1, 0, 3}; //Mun
    string s7 (10, 'x');

    //imprime todas las variables  desde s1 a s7 en diferentes lineas
    cout << "s1: "<< s1 << endl;
    cout << "s2: "<< s2 << endl;
    cout << "s3: "<< s3 << endl;
    cout << "s4: "<< s4 << endl;
    cout << "s5: "<< s5 << endl;
    cout << "s6: "<< s6 << endl;
    cout << "s7: "<< s7 << endl;
   
   

    return (0);
}