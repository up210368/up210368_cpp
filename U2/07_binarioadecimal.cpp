#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int bin[8];
    int i, j, n=0;
    int sum = 0;
    cout << "ingrese el numero binario (maximo 8 bits)" << endl;
    scanf("%d", &n);
    for (i = 7; i >= 0; i--)
    {
        bin[i] = n % 10;
        n /= 10;
    }
    i = -1;

    for (j = 7; j >= 0; j--)
    {
        switch (bin[j])
        {
        case 0:
            i++;
            sum += 0 * pow(2, i);
            break;
        case 1:
            i++;
            sum += 1 * pow(2, i);
            break;
        }
    }
    printf ("el numero decimal es: %d\n", sum);

    return 0;
}
