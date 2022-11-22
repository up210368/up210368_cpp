#include <iostream>
#include <stdio.h>
using namespace std;

void Ordenar(int x[], int v);

int main()
{
    int c[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("Vector: \n");
    int n = sizeof(c) / 4;
    for (int i=0; i<n; i++)
    {
        cout << c[i] << "  ";
    }
    printf("\nVector Ordenado: \n");
    Ordenar(c, n);
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << "  ";
    }
    return 0;
}

void Ordenar(int x[], int v)
{
    int m, s, c;
    do
    {
        c = 0;
        for (int i = 0; i < v; i++)
        {
            s = i + 1;
            if (x[i] > x[s])
            {
                m = x[s];
                x[s] = x[i];
                x[i] = m;
                c++;
            }
        }

    } while (c > 0);
}