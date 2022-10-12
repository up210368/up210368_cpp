#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    float n;
    float r;
    cout << "cual es tu puntuacion?" << endl;
    cin >> n;
    if (n == 0.0f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es inaceptable " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    if (n == 0.4f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es aceptable " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    if (n == 0.6f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es meritorio " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    else if (n != 0.0f && n != 0.4f && n != 0.6f)
    {
        cout << "puntuacion invalida, intente de nuevo" << endl;
    }

    system("pause");
    int z = getchar();
    return 0;
}