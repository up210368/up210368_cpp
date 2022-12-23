# Unit 3 programs
---
---
<details> <summary> 1. Biseccion </summary>

## **01 biseccion**
```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double fnEcuacion1 (double x) //x^2 - 8x + 15
{
    return (pow(x,2) - 8 * x + 15);
}

int main ()
{
    double x1 = -10;
    double x2 = 4.5;
    double xm = 0;

    double Es = .001;          // Error absoluto / estandar
    double Er = abs(x2 - x1); // Error relativo

    int i = 1;
    while (Er > Es)
    {
        xm = (x1 + x2)/2;
        if (fnEcuacion1 (x1) * fnEcuacion1 (xm) < 0)
        {
            x2 = xm;
        } 
        else
        {
            x1 = xm;
        }
        Er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << " raiz = " << xm << endl;

    return 0;
}
```
## *Run*
![](/Images/biseccion.PNG)
</details>

---
<details> <summary> 2. Bisiesto </summary>

## **02 bisiesto**
```
#include <iostream>
#include <stdio.h>
using namespace std;

bool bisiesto(int ano)
{
    bool r;
    r = ano%400==0 || ano%4==0 && ano%100!=0;
    return r;
}

int main()
{
    int a;
    printf("Que año quieres saber si es bisiesto?\n");
    scanf ("%d", &a);
    if (bisiesto(a) == 0)
    {
       printf ("el año %d No es bisiesto.\n", a); 
    }
    else
    {
        printf ("el año %d es bisiesto.\n", a); 
    }

    return 0;
}
```
## *Run*
![](/Images/bisiesto.PNG)
</details>

---
<details> <summary> 3. Coseno </summary>

## **03 Coseno**
```
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
```
![](/Images/coseno.PNG)
</details>

---
<details> <summary> 4. Desviación estándar </summary>

## **04 Desviación estándar**
```
#include <iostream>
#include <math.h>
#include "conio.h"

using namespace std;

void menu()
{
    printf("Es necesario seguir los pasos de foma acendente\n");
    cout << "1) Ingresar datos" << '\n';
    cout << "2) Calcular varianza" << '\n';
    cout << "3) Calcular desviación estándar" << '\n';
    cout << "4) Salir" << '\n';
}

int numeroDatos()
{
    int cantidad = 0;
    cout << "Número de datos a ingresar:" << '\n';
    cin >> cantidad;
    return cantidad;
}

int *obtenerDatos(int cantidad)
{
    int *datos = new int[cantidad];
    for (size_t i = 0; i < cantidad; i++)
    {
        cout << "Ingrese dato " << i + 1 << ": " << '\n';
        cin >> datos[i];
    }
    return datos;
}

float obtener_promedio(int cantidad, int *datos)
{
    float suma = 0;
    for (size_t i = 0; i < cantidad; i++)
    {
        suma += datos[i];
    }
    return suma / cantidad;
}

float obtener_varianza(int cantidad, int *datos)
{
    int n = cantidad;
    float promedio = obtener_promedio(n, datos);
    float varianza = 0;
    for (size_t i = 0; i < n; i++)
    {
        varianza += pow((datos[i] - promedio), 2.0);
    }
    return varianza / (n - 1);
}

float obtener_desviacion(int cantidad, float varianza, int *datos)
{
    if (varianza == 0)
    {
        float varianza = obtener_varianza(cantidad, datos);
    }
    return sqrt(varianza);
}

int main()
{
    int opcion = -1;
    int cantidad = 0;
    int *datos;
    float varianza = 0;
    float desviacion = 0;
    char pause = 0;
    do
    {
        menu();
        cin >> opcion;
        if (cin.fail() && cin.rdstate())
        {
            cout << "Valor no válido, intente de nuevo." << endl;
            opcion = -1;
            break;
        }
        switch (opcion)
        {
        case 1:
            cantidad = numeroDatos();
            datos = obtenerDatos(cantidad);
            break;
        case 2:
            varianza = obtener_varianza(cantidad, datos);
            cout << "varianza: " << varianza << '\n';
            cout << "continuar..." << endl;
            getch();
            break;
        case 3:
            desviacion = obtener_desviacion(cantidad, varianza, datos);
            cout << "Desviación: " << desviacion << '\n';
            cout << "continuar..." << endl;
            getch();
            break;
        default:
            cout << "Proceso finalizado" << '\n';
            break;
        }

    } while (opcion != 4);
    return 0;
}
```
![](/Images/desviacion.PNG)
</details>

---
<details> <summary> 5. Moneda </summary>

## **05 moneda**
```
#include <iostream>
#include <stdio.h>
using namespace std;
// Realizar un programa que indique con que cantidad de billetes debe pagar cierta cantidad. Por ejemplo, necesitas 3 billetes de 200 para pagar $600.
int main()
{
    int formadp[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int pago = 3686;
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
```
![](/Images/moneda.PNG)
</details>

---
<details> <summary> 6. Arabigos a romanos </summary>

## **06 Arabigos a romanos**
```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int numero, unidades, decenas, centenas, millares;
    cout << "Ingrese el numero a convertir en romano" << endl;
    cin >> numero;
    unidades = numero % 10;
    numero /= 10;
    decenas = numero % 10;
    numero /= 10;
    centenas = numero % 10;
    numero /= 10;
    millares = numero % 10;
    numero /= 10;

    switch (millares)
    {
    case 1:
        cout << "M"; break;
    case 2:
        cout << "MM"; break;
    case 3:
        cout << "MMM"; break;
    }
    cout << "\t";

    switch (centenas)
    {
    case 1:
        cout << "C"; break;
    case 2:
        cout << "CC"; break;
    case 3:
        cout << "CCC"; break;
    case 4:
        cout << "CD"; break;
    case 5:
        cout << "D"; break;
    case 6:
        cout << "DC"; break;
    case 7:
        cout << "DCC"; break;
    case 8:
        cout << "DCCC"; break;
    case 9:
        cout << "CM"; break;
    }
    cout << "\t";

    switch (decenas)
    {
    case 1:
        cout << "X"; break;
    case 2:
        cout << "XX"; break;
    case 3:
        cout << "XXX"; break;
    case 4:
        cout << "XL"; break;
    case 5:
        cout << "L"; break;
    case 6:
        cout << "LX"; break;
    case 7:
        cout << "LXX"; break;
    case 8:
        cout << "LXXX"; break;
    case 9:
        cout << "XC"; break;
    }

    switch (unidades)
    {
    case 1:
        cout << "I"; break;
    case 2:
        cout << "II"; break;
    case 3:
        cout << "III"; break;
    case 4:
        cout << "IV"; break;
    case 5:
        cout << "V"; break;
    case 6:
        cout << "VI"; break;
    case 7:
        cout << "VII"; break;
    case 8:
        cout << "VIII"; break;
    case 9:
        cout << "IX"; break;
    }

    return 0;
}
```
![](/Images/romano.PNG)
</details>

---
<details> <summary> 7. RFC </summary>

## **07 RFC**
```
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
```
![](/Images/rfc.PNG)
</details>

---
<details> <summary> 8. Ordenar vector </summary>

## **08 ordenar vector**
```
#include <iostream>
#include <stdio.h>
using namespace std;

void Ordenar(int x[], int v);

int main()
{
    int c[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(c) / 4;
    Ordenar(c, n);
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}

void Ordenar(int x[], int v)
{
    int m, s, c;
    do
    {
        c = 0;
        for (int i = 0; i < v; i++)
        {
            s = i + 1;
            if (x[i] > x[s])
            {
                m = x[s];
                x[s] = x[i];
                x[i] = m;
                c++;
            }
        }

    } while (c > 0);
}
```
![](/Images/ordenarv.PNG)
</details>

---
<details> <summary> 9. Función recursiva </summary>

## **09 Función recursiva**
```
#include <iostream>
using namespace std;

void comprobar(char r);

int main()
{
    char c;
    cout << "Pulsa un numero : ";
    cin >> c;
    comprobar(c);
    cout << "Fin." << endl;
}

void comprobar(char r)
{
    int n = int(r);
    if (n >= 48 && n <= 57)
    {
        cout << "Efectivamente, si reconoces los numeros." << endl;
    }
    else
    {
        cout << "Incorrecto, NO sabes escribir un numero?." << endl;
        cout << "Escribe un numero: ";
        cin >> r;
        comprobar(r);
    }
}
```
![](/Images/recursiva.PNG)
</details>

---
---