# Códigos Unidad 2
---
---
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