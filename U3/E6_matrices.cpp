#include <iostream>
#include <stdio.h>
//#include <windows.h>
using namespace std;

/*void imprimirA(int A[][c], int f) void = procedimiento (no es una funcion/ No regresa nada).
{
    cout << "Matriz A" <<  endl;
    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            
        }
    }
}*/

int main()
{
    int f = 2, c = 3;
    int matriz[f][c];
    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c;j++)
        {
            cout << "Dame el numero de " << i << ", " << j << endl;
            cin >> matriz[i][j];
        }
    }
    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}