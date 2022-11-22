#include <iostream>
using namespace std;

void comprobar(char r);

int main()
{
    char c;
    cout << "Pulsa un numero : ";
    cin >> c;
    comprobar(c);
    cout << "Fin." << endl;
}

void comprobar(char r)
{
    int n = int(r);
    if (n >= 48 && n <= 57)
    {
        cout << "Efectivamente, si reconoces los numeros." << endl;
    }
    else
    {
        cout << "Incorrecto, NO sabes escribir un numero?." << endl;
        cout << "Escribe un numero: ";
        cin >> r;
        comprobar(r);
    }
}