<center> Hola jaja </center>
# Jorge López
![](Images/stranger%20things.gif)
# H1 Linea de encabezado
## **Texto en negritas**
__Texto en negritas__  
*Cursiva*  
> Cita de elementos  
---
tres guiones/menos = linea horizontal  
1. Leer  
2. Escribir  
3. Ejecutar  
</ol>
Se puede utilizar código HTML.
<ol>
<li> Read
<li> Write
<li> Execute </li>
</ol>

Asterisco o guion para enlistar con un punto
* Primer elemento
* Segundo elemento
---
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
<div align = "center">
<img alt = "stranger things" src = '/Images/stranger things'>
</div>

## Tabla
| Color | Código |
| ----- | ------ |
| Rojo | #FF0000 |
| Azul | #0000FF |

`https://github.com/up210368`
https://github.com/up210368
> [github] (https://github.com/up210368)

<https://github.com/up210368> "github"
<a> <href = "https://github.com/up210368"> https://github.com/up210368 </a>