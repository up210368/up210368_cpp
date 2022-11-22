#include <iostream>
#include <stdio.h>
using namespace std;
// Realizar un programa que indique con que cantidad de billetes debe pagar cierta cantidad. Por ejemplo, necesitas 3 billetes de 200 para pagar $600.
int main()
{
    int formadp[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int pago = 3699;
    printf("quiero pagar %d\nNecesitas pagar con:\n", pago);
    int i=0;
    do
    {
        if (pago>=formadp[i])
        {
            if (i <= 5)
            {
                cout << pago/formadp[i] << " billetes de $" << formadp[i] << endl;
                pago = pago % formadp[i];
            }
            else
            {
                cout << pago/formadp[i] << " monedas de $" << formadp[i] << endl;
                pago = pago % formadp[i];
            }
        }
        i++;
    } while (pago != 0);

    return 0;
}
