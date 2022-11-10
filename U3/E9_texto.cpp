#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char letra = 'A';
    char texto[20] = "Uni10vEr20siDa41d";
    char texto2[] = {'A', 'D', 'I', 'O', 's'};
    for (int i = 0; texto[i] != '\0'; i++)
    {
        cout << texto [i];
    }
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'U')
        {
            //cout << texto[i]<< " ";
        }
        else
        {
            //cout << texto[i] << " ";
        }
    }
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (islower(texto[i]) && isalpha(texto[i]))
        {
            texto[i] = tolower(texto[i]);
            cout << texto[i] << " ";
        }
        else if (isupper(texto[i]) && isalpha(texto[i]))
        {
            texto[i] = tolower(texto[i]);
            cout << texto[i] << " ";
        }
    }
    cout << endl;
    
}