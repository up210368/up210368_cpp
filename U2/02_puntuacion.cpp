#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    float n;
    cout << "cual es tu puntuacion?" << endl;
    cin >> ceil (n);
    if (n != 0 || n != 0.4 || n != 0.6)
    {
        cout << "puntuacion invalida, intente de nuevo" << endl;
    }
    float r;
    if (n == 0 || n == 0.4 || n == 0.6)
    {
        if (n == 0)
        {
            r = n * 2400;
            cout << "Tu nivel de rendimiento es inaceptable " << endl;
            cout << "Vas a recibir $" << ceil (r) << endl;
        }
        if (n == 0.4)
        {
            r = n * 2400;
            cout << "Tu nivel de rendimiento es aceptable " << endl;
            cout << "Vas a recibir $" << ceil (r) << endl;
        }
        else
        {
            r = n * 2400;
            cout << "Tu nivel de rendimiento es meritorio " << ceil (r) << endl;
            cout << "Vas a recibir $" << r << endl;
        }
    }

    system("pause");
    int z = getchar();
    return 0;
}