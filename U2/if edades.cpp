#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a, n;
    do
    {
        cout << "cual es tu edad?" << endl;
        cin >> n;
        if (n >= 0 && n <= 30)
        {
            printf("Eres primera edad\n");
        }
        if (n > 30 && n <= 60)
        {
            printf("Eres segunda edad\n");
        }
        if (n > 60 && n <= 90)
        {
            printf("Eres tercera edad\n");
        }
        if (n > 90 && n <= 150)
        {
            printf("Haces horas extra\n");
        }
        if (n > 150 || n < 0)
        {
            printf("Rango de edad invalido. Intenta de nuevo\n");
            printf("Presiona 1 para intentar de nuevo\n");
            cin >> a;
            while (a != 1)
            {
                printf("Presiona 1 para intentar de nuevo\n");
                cin >> a;
            }
        }
        printf ("1 para ingresar una edad nuevamente.\n0 para finalizar\n");
        cin >> a;
    } while (a == 1);

    system("pause");
    int z = getchar();
    return 0;
}