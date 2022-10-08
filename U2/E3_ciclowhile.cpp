#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    do
    {
        int n;
        cout << "Ingresa el numero" << endl;
        cin >> n;
        for (int i = 1; i <= 10; i++)
        {   
            int r = n * i;
            cout << n << " * " << i << " = " << r << endl;
        }
        cout << "quieres poner otro numero? SI = 1" << endl;
        cin >> a;
    } while (a==1);

    system("pause");
    int z = getchar();
    return 0;
}