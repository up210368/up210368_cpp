#include <iostream>
#include <stdio.h>
using namespace std;

int menorv (int x[], int n)
{
    int menor = x[0];
    for (int i=0; i<n;i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }

    return menor;
}

int mayor2(int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y ;     // (if ternario) ? true : false;

    return mayor;
}

int main ()
{
    int n = 5;
    int cal[] = {10,9,8,7,6};
    
    int menor = menorv (cal, 5);
    cout << "Menor = " << menor << endl;

    int mayor = mayor2(5, 10);
    cout << "Mayor = " << mayor << endl;

    
    /*
    int meses[] = {0,31,28,31,30};
    double n = 5;
    int total = 0;
    for (int i=0;i<n;i++)
    {
        total += cal2[i];
    }
    cout << total << endl;
    double prom = total / n;
    cout << prom << endl;*/
    return 0;
}