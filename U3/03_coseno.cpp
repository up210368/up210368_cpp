#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double factorial(int n);
double G2R(double g);
double coseno(double g, int i);

int main()
{
    int g=45;
    double x1=10;
    double Es=0.0001;
    double c=0;

    double Er=x1-c;
    int i=0;

    while(Er>Es){
        x1=c;
        c=c+coseno(g,i);
        Er=abs(x1-c);
        i++;
    }
    cout<<"El coseno de "<<g<<" grados es: "<<c;
    return 0;
}

double factorial(int n)
{
    int f=1;
    for (int i=1; i<=n; i++)
    {
        f *= i;
    }

    return f;
}

double G2R(double g)
{
    double r;
    r = g*M_PI/180;
    return r;
}

double coseno(double g, int i)
{
    double c;
    c=pow(-1,i)*pow(G2R(g),2*i)/(factorial(2*i));
    return c;
}