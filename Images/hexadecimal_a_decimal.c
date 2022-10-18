#include <stdio.h>
#include <math.h>
int main()
{
    char hex[8];
    int sum = 0;
    int i = 0;
    int j = 7;
    for (i = 0; i < 8; i++)
    {
        hex[i] = 0;
    }
    i = -1;
    printf("Escribe un numero hexadecimal en mayusculas\n");
    scanf("%s", hex);
    for (j = 7; j >= 0; j--)
    {
        switch (hex[j])
        {
        case '0':
            i++;
            sum += 0 * pow(16, i);
            break;
        case '1':
            i++;
            sum += 1 * pow(16, i);
            break;
        case '2':
            i++;
            sum += 2 * pow(16, i);
            break;
        case '3':
            i++;
            sum += 3 * pow(16, i);
            break;
        case '4':
            i++;
            sum += 4 * pow(16, i);
            break;
        case '5':
            i++;
            sum += 5 * pow(16, i);
            break;
        case '6':
            i++;
            sum += 6 * pow(16, i);
            break;
        case '7':
            i++;
            sum += 7 * pow(16, i);
            break;
        case '8':
            i++;
            sum += 8 * pow(16, i);
            break;
        case '9':
            i++;
            sum += 9 * pow(16, i);
            break;
        case 'A':
            i++;
            sum += 10 * pow(16, i);
            break;
        case 'B':
            i++;
            sum += 11 * pow(16, i);
            break;
        case 'C':
            i++;
            sum += 12 * pow(16, i);
            break;
        case 'D':
            i++;
            sum += 13 * pow(16, i);
            break;
        case 'E':
            i++;
            sum += 14 * pow(16, i);
            break;
        case 'F':
            i++;
            sum += 15 * pow(16, i);
            break;
        }
    }

    printf("El numero decimal es: %d\n", sum);
}
