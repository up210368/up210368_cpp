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