/*
    Preguntar al usuario cuánto paga de renta anual y mostrarle el impuesto que le corresponde
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{   
    int r, des, total; 
    cout << "cuanto pagas de renta anual?" << endl;
    cin >> r;

    if (r>-1)
    {
        if (r <= 10000)
        {
            des = r * .05;
            total = r * 1.05;
            printf ("Tu impuesto es de:  %d\nEl monto total que pagas es de:  %d\n", des, total);
        }
        else if (r > 10000 && r <= 20000)
        {
            des = r * .15;
            total = r * 1.15;
            printf ("Tu impuesto es de:  %d\nEl monto total que pagas es de:  %d\n", des, total);
        }
        else if (r > 20000 && r <= 35000)
        {
            des = r * .2;
            total = r * 1.2;
            printf ("Tu impuesto es de:  %d\nEl monto total que pagas es de:  %d\n", des, total);
        }
        else if (r > 35000 && r <= 60000)
        {
            des = r * .3;
            total = r * 1.3;
            printf ("Tu impuesto es de:  %d\nEl monto total que pagas es de:  %d\n", des, total);
        }
        else
        {
            des = r * .45;
            total = r * 1.45;
            printf ("Tu impuesto es de:  %d\nEl monto total que pagas es de:  %d\n", des, total);
        }

    }
    else
    {
        printf ("Valor invalido");
    }


    system ("pause");
    int z = getchar();
    return 0;
}