#include <iostream>
#include <stdio.h>
using namespace std;

/*void imprimirA(int A[][], int f, int c)
{
    cout << "Matriz A" <<  
}*/

int main()
{
    int f = 2, c = 3;
    int matriz[f][c];
    // matriz [1][2] = 6;
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