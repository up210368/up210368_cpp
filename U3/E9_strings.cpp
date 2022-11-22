#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main ()
{
    char a[]= "sida";
    string texto2("HolA"); 
    string texto = "Universidad UPA";
    cout << "Contenido: " << texto << endl;
    cout << "length: " << texto.length() << endl;
    cout << "compare: " << texto.compare("Universidad") << endl; // resul = 0 sig c1 = c2 (cadena comparandose).
                                                                // resul = (<0) sig c1 < c2. res = (>0) sig c1 > c2. 
    cout << "find: " << texto.find(a) << endl; // regresa posicion de lo que buscamos.
    cout << "substr: " << texto.substr(6,4) << endl; // desde la posicion 6 regresa los 4 char despues de esta.
    cout << "find_last: " << texto.find_last_of("i") << endl; // regresa la posicion anterior de lo que se busco.
    cout << "replace: " << texto.replace(6,5, "vih") << endl;
    texto = texto + ".";  // concatena
    cout << "concatenar: " << texto << endl;
    texto.clear(); // limpia
    cout << "Clear:" << texto << endl;
    texto.swap(texto2); // intercambia el valor de cada texto
    cout << "swap: " << texto << endl;

    return 0;
}