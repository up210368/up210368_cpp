#include <iostream>
#include <stdio.h>
#include <cstring> // para c++
//#include <string.h> para c nativo
using namespace std;

int main()
{
    char letra = 'A';
    char texto[50] = "Uni10vEr20siDa41d";
    char texto2[] = {'A', 'D', 'I', 'O', 's'};
    strcat(texto, " la mejor");  // concatenar / agregar texto a texto
    cout << texto << endl;
    
    cout << strchr(texto, ' ') << endl;  // traer substring

    return 0;
}