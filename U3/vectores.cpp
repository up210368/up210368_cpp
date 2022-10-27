#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int cal [5];
    cal [0] = 10;
    cal [1] = 9;
    cal [2] = 8;
    cal [3] = 7;
    cal [4] = 8;
    
    double cal2[] = {10,5,6,8,7};
    int meses[] = {31,28,31,30};
    double n = 5;
    int total = 0;
    for (int i=0;i<n;i++)
    {
        total += cal2[i];
    }
    cout << total << endl;
    double prom = total / n;
    cout << prom << endl;
    return 0;
}