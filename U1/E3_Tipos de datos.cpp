#include <iostream>
#include <stdio.h>
#define pi 3.1416
const float PI = 3.1415;

using namespace std;
int main()
{
    int unsigned entero = 23458973;
    float flotante = 21461e-4;
    double grande = 2.242000435076;
    char caracter = 72;
    cout << "Este programa muestra los tipos de datos \n" << endl;
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del numero entero es: " << sizeof (entero) << " bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    cout << "El tamaño del numero flotante es: " << sizeof (flotante) << " bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof (caracter) << " bytes" << endl;
    cout << "La variante constante pi vale: " << pi << endl;
    cout << "La variante constante PI vale: " << PI << endl;

    system ("pause");
    int z = getchar ();
    return 0;
}