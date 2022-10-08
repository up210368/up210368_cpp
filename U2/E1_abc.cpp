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