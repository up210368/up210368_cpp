#include <iostream>
#include <stdio.h>
#include <string>
#include "conio.h"
using namespace std;

string apellidos(string a, string b);
string nacimiento(string a, string me, string d);

void menu()
{
    printf("Obter tu RFC.\n1) Para ingresar tus apellidos.\n");
    printf("2) Para ingresar tu fecha de nacimiento.\n");
    printf("3) Para obtener tu RFC.(Usa esta opción después de ingresar todos tus datos.)\n");
    printf("4) Para salir.\n");
}

int main()
{
    int m = 0;
    string apellido1 = "";
    string apellido2 = "";
    string iniciales, d, me, a;
    int dia;
    int mes;
    int ano;
    string fecha;
    do
    {
        menu();
        scanf("%d", &m);
        if (cin.fail() && cin.rdstate())
        {
            cout << "Valor no válido, intente de nuevo." << endl;
            break;
        }
        switch (m)
        {
        case 1:
            printf("Ingresa tu primer apellido\n");
            cin >> apellido1;
            printf("Ingresa tu segundo apellido\n");
            cin >> apellido2;
            iniciales = apellidos(apellido1, apellido2);
            break;
        case 2:
            printf("Ingresa tu día de nacimiento.\n");
            scanf("%d", &dia);
            printf("Ingresa tu mes de nacimiento.\n");
            scanf("%d", &mes);
            printf("Ingresa tu año de nacimiento.\n");
            scanf("%d", &ano);

            d = to_string(dia); me = to_string(mes); a = to_string(ano);
            fecha = nacimiento(a, me, d);
            break;
        case 3:
            cout << "Tu RFC es: " << iniciales + fecha << endl;
            printf("Enter para continuar\n");
            getch();
            break;
        }
    } while (m != 4);

    return 0;
}

string nacimiento(string a, string me, string d)
{
    if (d.length() == 1)
    {
        d = "0" + d;
    }
    if (me.length() == 1)
    {
        me = "0" + me;
    }
    return (a + me + d);
}

string apellidos(string a, string b)
{
    string iniciales, iniciales2;
    iniciales = a.substr(0, 2);
    iniciales2 = b.substr(0, 1);
    for (int i = 0; i < iniciales.length(); i++)
    {
        iniciales[i] = toupper(iniciales[i]);
    }
    for (int i = 0; i < iniciales2.length(); i++)
    {
        iniciales2[i] = toupper(iniciales2[i]);
    }
    return (iniciales + iniciales2);
}