#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    printf ("dame el número de la tabla que quieres saber\n");
    scanf ("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int r = n * i;
        cout << n << " * " << i << " = " << r << endl;
    }
    printf ("\n");
    for (int i = 10; i >= 1; i--)
    {
        int r = n * i;
        cout << n << " * " << i << " = " << r << endl;
    }
    printf ("\n");
    int i = 1;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i++ << endl;
    }
    printf ("\n");
    i = 10;
    while (i >= 1)
    {
        cout << n << " * " << i << " = " << n * i-- << endl;
    }
     printf ("\n");
    i = 1;
    do
    {
        cout << n << " * " << i << " = " << n * i++ << endl;
    } while (i<=10);
    printf ("\n");
    i = 10;
    do
    {
        cout << n << " * " << i << " = " << n * i-- << endl;
    } while (i >= 1);

    system("pause");
    int z = getchar();
    return 0;
}