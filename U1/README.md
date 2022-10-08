# Códigos Unidad 1
---
---
## **Hola mundo**
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout << "hola mundo " << endl;

	system("pause");
	return 0;
}
```
## *Compilado*  
![](/Images/hola.PNG)  

---
## **parimpar**  
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout << "par o impar " << endl;

	system("pause");
	return 0;
}
```  
## *Compilado*  
![](/Images/parimpar.PNG)  

---  
## **Tipos de datos**  
```
#include <iostream>
#include <stdio.h>
#define pi 3.1416
const float PI = 3.1415;
using namespace std;
int main()
{
    int unsigned entero = 23458973;
    float flotante = 21461e-4;
    double grande = 2.242000435076;
    char caracter = 72;
    cout << "Este programa muestra los tipos de datos \n" << endl;
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del numero entero es: " << sizeof (entero) << " bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    cout << "El tamaño del numero flotante es: " << sizeof (flotante) << " bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof (caracter) << " bytes" << endl;
    cout << "La variante constante pi vale: " << pi << endl;
    cout << "La variante constante PI vale: " << PI << endl;

    system ("pause");
    int z = getchar ();
    return 0;
}
```
## *Compilado* 
![](/Images/Datos.PNG)  

--- 
## **Ciclos**
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
    int sumap=0, sumai=0;
    int n =10;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 ==0)
        {
            sumap += i;
        }
        else
        {
            sumai += i;
        }
    }
    int res = sumap + sumai;
    printf ("suma de pares = %d\n", sumap);
    printf ("suma de impares = %d\n", sumai);
    printf ("suma de pares e impares = %d\n", res);

    system ("pause");
    int c = getchar();
    return 0;
}
```  
## *Compilado* 
![](/Images/ciclo.PNG)  

---
## **if edades**
```
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
```
## *Compilado*
![](/Images/edad.PNG)  

---  
---