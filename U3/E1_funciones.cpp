#include <iostream>
#include <stdio.h>
#include <math.h>
const double E = 2.71828182;
using namespace std;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}

int sumatoria(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r = r + i;
    }
    return r;
}
double Ec(int x) //x^2 - 8x + 15
{
    double r;
    r = pow(x, 2) - 8 * x + 15;
    return r;
}

double Ec2(double x) // Para e^-x + 4x³ -5
{
    return (pow(E, -x) + 4 * pow(x, 3) - 5);
}

string camello (string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i]= tolower(x[i]);
        }
    }
    return x;
}

int main(int argc, char const *argv[])
{
    int n = 10;
    double x = doble(5);
    x = sumatoria(n);
    cout << "La sumatoria de " << n << " es: " << x << endl;
    for (int i = 0; i <= 10; i++)
    {
        x = Ec (i);
        cout << "x = " << i << " R ecuacion = " << x << endl;
    } 
    x = Ec2(1.031232234);
    printf("%10.10f\n", x);
    string res = camello ("Upa");
    cout << res << endl;

    return 0;
}
