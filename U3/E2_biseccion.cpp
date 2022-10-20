#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double fnEcuacion1 (double x) //x^2 - 8x + 15
{
    return (pow(x,2) - 8 * x + 15);
}

int main ()
{
    double x1 = -10;
    double x2 = 4.5;
    double xm = 0;

    double Es = .001;          // Error absoluto / estandar
    double Er = abs(x2 - x1); // Error relativo

    int i = 1;
    while (Er > Es)
    {
        xm = (x1 + x2)/2;
        if (fnEcuacion1 (x1) * fnEcuacion1 (xm) < 0)
        {
            x2 = xm;
        } 
        else
        {
            x1 = xm;
        }
        Er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << " raiz = " << xm << endl;

    return 0;
}