#include <iostream>
using namespace std;

int doble (int a)
{
    int r;
    r = a * 2;
    return r;
}

int sumatoria (int n)
{
    int r = 0;
    for (int i = 1; i <= n; i ++)
    {
        r = r + i;
    }
    return r;
}

int main (int argc, char const *argv[])
{
    int n = 10;
    int x = doble(5);
    x = sumatoria (n);
    cout << "La sumatoria de " << n << " es: " << x << endl;
    return 0;
}