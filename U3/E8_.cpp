#include <iostream>
#include <stdio.h>
using namespace std;
#define f 4
#define c 4

void llenarM(int A[f][c])
{
    /*for (int i=0; i<f; i++)
    {
        for (int j=0; j<c;j++)
        {
            cout << "Dame el numero de " << i << ", " << j << "\n\n";
            cin >> A[i][j];
        }
    }*/
    int contador = 1;
    for (int i = 0; i < f; i++)
    {
        for (int j=0; j<c; j++)
        {
            A[i][j] = contador;
            contador++;
        }
    }
}

void imprimirM(int A[f][c])
{
    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

void imprimirD(int A[f][c])
{
    for (int i=0; i<c; i++)
    {
        cout << A [i][i] << endl;
    }
}
void sumaR(int A[f][c])
{
    int suma;
    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            suma += A[i][j];
        }
        cout << suma << endl;
    }
}

int main()
{
    //int f = 4, c = 4;
    int matriz[f][c];
    llenarM(matriz);
    //imprimirM(matriz);
    //imprimirD(matriz);
    sumaR(matriz);
    return 0;
}