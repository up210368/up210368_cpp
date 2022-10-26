#include <iostream>
#include <stdio.h>
using namespace std;

double factorial (double n);

int main ()
{
    double e = 0;
    for (int i = 0; i <= 10; i++)
    {
        e += (1 / factorial(i));
    }
   printf("%2.10f\n", e);

    return 0;
}

double factorial (double n)
{
    double ft=1;
    int i;
    for (i=1; i<=n; i++)
    {
        ft*=i;
    }
    return ft;
}