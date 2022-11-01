# Códigos Unidad 2
---
---
## **abc**
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char letra = 'A'; //Código ascii letra = 65
    for (int i = 0; i < 26; i++)
    {
        cout << letra << "\t";
        letra = letra + 1;
    }
    cout << endl;
    char letram = 'a'; 
    for (int i = 0; i < 26; i++)
    {
        cout << letram << "\t";
        letram = letram + 1;
    }
    cout << endl;
    char letraz = 'Z';
    for (int i = 0; i < 26; i++)
    {
        cout << letraz << "\t";
        letraz = letraz - 1;
    }
    cout << endl;
    char letramz = 'z';
    for (int i = 0; i < 26; i++)
    {
        cout << letramz << "\t";
        letramz = letramz - 1;
    }
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i;
    }
    cout << endl;
    for (int j = 10; j >= 1; j--)
    {
        cout << " " << j;
    }
    cout << endl;

    system ("pause");
    int z = getchar ();
    return 0;
}
```
## *Compilado*
![](/Images/abc.PNG)

---
## **Tabla**
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    printf ("dame el número de la tabla que quieres saber\n");
    scanf ("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int r = n * i;
        cout << n << " * " << i << " = " << r << endl;
    }
    printf ("\n");
    for (int i = 10; i >= 1; i--)
    {
        int r = n * i;
        cout << n << " * " << i << " = " << r << endl;
    }
    printf ("\n");
    int i = 1;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i++ << endl;
    }
    printf ("\n");
    i = 10;
    while (i >= 1)
    {
        cout << n << " * " << i << " = " << n * i-- << endl;
    }
     printf ("\n");
    i = 1;
    do
    {
        cout << n << " * " << i << " = " << n * i++ << endl;
    } while (i<=10);
    printf ("\n");
    i = 10;
    do
    {
        cout << n << " * " << i << " = " << n * i-- << endl;
    } while (i >= 1);

    system("pause");
    int z = getchar();
    return 0;
}
```  
## *Compilado*
![](/Images/tabla.PNG)  

---
## **Ciclo while**
```
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
```
## *Compilado*
![](/Images/ciclowhile.PNG)

---
## **forfor**
```
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
```
![](/Images/forfor1.PNG)
![](/Images/forfor2.PNG)
![](/Images/forfor3.PNG)
![](/Images/forfor4.PNG)

---
---
# Ejercicios
## **Tramos**
```
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
```
## *Compilado*
![](/Images/tramos.PNG)

---
## **puntuacion**
```
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    float n;
    float r;
    cout << "cual es tu puntuacion?" << endl;
    cin >> n;
    if (n == 0.0f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es inaceptable " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    if (n == 0.4f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es aceptable " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    if (n == 0.6f)
    {
        r = n * 2400;
        cout << "Tu nivel de rendimiento es meritorio " << endl;
        cout << "Vas a recibir $" << fixed << setprecision(2) << r << endl;
    }
    else if (n != 0.0f && n != 0.4f && n != 0.6f)
    {
        cout << "puntuacion invalida, intente de nuevo" << endl;
    }

    system("pause");
    int z = getchar();
    return 0;
}
```
![](/Images/puntuacion.PNG)  

---
## **juegos** (lenguaje python)
```
edad = int (input("Cual es tu edad?\n"))

if edad >0 and edad < 4: 
    print ("Entrada gratis\n")
elif edad >=4 and edad <= 18:
    print ("pagas $5\n")
elif edad > 18 and edad < 90:
    print ("pagas $10\n")
else:
    print ("Valor invalido\n")
```
![](/Images/juegos.PNG)

---
## **pizza** (lenguaje python)
```
pizza = input ("Que tipo de pizza quieres. Vegetariana o no vegetariana? (usa minusculas)\n")
if pizza == "vegetariana":
    ingrediente = input ("Que ingrediente quieres que lleve tu pizza\nLos ingredientes son: pimiento y tofu\n")
    match ingrediente:
        case "pimiento":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y pimiento.\n")
        case "tofu":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y tofu.\n")
        case _:
            print ("No contamos con ese ingrediente. Intente de nuevo")
elif pizza == "no vegetariana":
    ingrediente = input ("Que ingrediente quieres que lleve tu pizza\nLos ingredientes son: peperoni, jamon y salmon\n")
    match ingrediente:
        case "peperoni":
            print ("Ordenaste una pizza no vegetariana y sus ingredientes son: mozzarella, tomate y peperoni.\n")
        case "jamon":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y jamon.\n")
        case "salmon":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y salmon.\n")
        case _:
            print ("No contamos con ese ingrediente. Intente de nuevo")
```
![](/Images/pizza.PNG)

---
## **temperatura** (lenguaje python)
```
contador = 0
mayor = 0
menor = 0
i = 1
datos = int (input ("cuantos datos quieres\n"))
for i in range (datos):
    temp = int(input("Ingresa la temperatura\n"))
    contador = contador + temp
    if (temp <= menor or menor == 0):
        menor = temp
    if (temp >= mayor):
        mayor = temp
prom = contador / datos

print ("\n\nEl promedio de las temperaturas es: ", prom, "\nLa temperatura mas baja es: ", menor, "\nLa temperatura mas alta es: ", mayor)
```
![](/Images/temp.PNG)

---
## **productos** (lenguaje python)
```
subtotal = 0
total = 0
cantidad = int (input ("Cuantos productos compraste?\n"))
while cantidad != 0:
    suma = 0
    for i  in range (cantidad):
        print ("Precio del producto ", i + 1)
        precio = int (input ())
        suma = suma + precio
    subtotal = suma
    print ("El subtotal de esos productos es $",subtotal)
    total = total + subtotal
    cantidad = int (input ("Cuantos productos compraste?\n"))
print ("El total de lo que compraste es $",total)
```
![](/Images/productos.PNG)

---
## **binario a decimal**
```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int bin[8];
    int i, j, n=0;
    int sum = 0;
    cout << "ingrese el numero binario (maximo 8 bits)" << endl;
    scanf("%d", &n);
    for (i = 7; i >= 0; i--)
    {
        bin[i] = n % 10;
        n /= 10;
    }
    i = -1;

    for (j = 7; j >= 0; j--)
    {
        switch (bin[j])
        {
        case 0:
            i++;
            sum += 0 * pow(2, i);
            break;
        case 1:
            i++;
            sum += 1 * pow(2, i);
            break;
        }
    }
    printf ("el numero decimal es: %d\n", sum);

    return 0;
}
```
![](/Images/binario.PNG)

---
---