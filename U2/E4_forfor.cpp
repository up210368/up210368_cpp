#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            int r = i * j;
            cout << i << " * " << j << " = " << r << endl;
        }
        cout << endl;
    }

    return 0;
}
