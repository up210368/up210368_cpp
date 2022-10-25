#include <iostream>
#include <stdio.h>
using namespace std;

// Declaracion
long int factorial (int n);
long int permutacion (int n, int r);
long int combinacion (int n, int r);

int main ()
{
    long int r;
    long int n;
    r = factorial(0);
    cout << r << endl;
    cout << permutacion(5,2) << endl;
    cout << combinacion(5,2) << endl;

    return 0;
}

long int permutacion (int n, int r)
{
    int p;
    p = factorial(n) / factorial (n - r);

    return p;
}
long int combinacion (int n, int r)
{
    int p;
    p = factorial(n) / factorial (n - r) / factorial(r);

    return p;
}

long int factorial (int n)
{
    long int ft=1;
    int i;
    for (i=1; i<=n; i++)
    {
        ft*=i;
    }
    return ft;
}

