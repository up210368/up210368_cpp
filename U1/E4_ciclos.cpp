#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
    int sumap=0, sumai=0;
    int n =10;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 ==0)
        {
            sumap += i;
        }
        else
        {
            sumai += i;
        }
    }
    int res = sumap + sumai;
    printf ("suma de pares = %d\n", sumap);
    printf ("suma de impares = %d\n", sumai);
    printf ("suma de pares e impares = %d\n", res);

    system ("pause");
    int c = getchar();
    return 0;
}