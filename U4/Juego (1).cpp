#include <iostream>
#include <windows.h>
#include "color.h"
#define n 3
using namespace std;

void clrscr() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 0, 0 };
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y) {
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}

void IT() {
    char p = 205;
    char pa = 186;
    char co = 202;
    for (int i = 0; i < 29; i++)
    {
        gotoxy(11 + i, 11); cout << RED << p;
    }

    for (int i = 0; i <= 3; i++) {
        gotoxy(20, 10 - i); cout << GRAY << pa;
        gotoxy(30, 10 - i); cout << pa;
        gotoxy(15, 10 - i); cout << LGREEN << pa;
        gotoxy(25, 10 - i); cout << pa;
        gotoxy(35, 10 - i); cout << pa;

    }

    gotoxy(20, 11); cout << RED << co;
    gotoxy(30, 11); cout << co;
    gotoxy(15, 11); cout << co;
    gotoxy(25, 11); cout << co;
    gotoxy(35, 11); cout << co;

}

void ID(int matriz[][n]) {
    char di = 220;
    string Y = "\x1B[38;2;53;149;240m";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] != 0)
            {
                gotoxy(15 - (matriz[i][j] - 1) / 2 + 10 * j, 10 - 1 * i);
                for (int k = 0; k < matriz[i][j]; k++)
                {
                    cout << Y << di;
                }
                if (Y == "\x1B[38;2;53;149;240m")
                {
                    Y = "\x1b[31m";
                }
                else
                {
                    Y = "\x1b[33m";
                }
            }
        }
    }
}

void LM(int matriz[][n]) {
    int p = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0) {
                matriz[i][j] = p;
                p = p - 2;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }
}

void jugar(int d[n][n],int m1,int m2) {
    clrscr();
    gotoxy(40, 20);
    int j, e;
    for (int i = n - 1; i >= 0; i--)
    {
        if (d[i][m1] != 0) {
            j = d[i][m1];
            d[i][m1] = 0;
            break;
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {
        if (d[i][m2] == 0 || j < d[i-1][m2] && i>=1 ) {
            d[i][m2] = j;
            break;
        } else
        {
            cout << "Error" << endl;
            d[i][m1] = j;
            break;
        }
    }
}

int main() {
    system("cls");
    clrscr();
    string b;
    int discos[n][n];
    int j = 0;
    int m1, m2;
    gotoxy(40, 10); cout << LBLUE << "Torres" << BLUE << " de " << GREEN << "hanoi" << endl;
    gotoxy(40, 12); cout << LBLUE << "Quieres iniciar el juego?" << endl;
    gotoxy(40, 15); cin >> b;

    while (b == "si")
    {
    LM(discos);
    gotoxy(40, 18); cout << LBLUE << "Ingresa tu jugada" << endl;
    while (j <= 200) {
    clrscr();
    IT();
    ID(discos);
    gotoxy(40, 21);cout << LBLUE << "De" << endl;
    gotoxy(40, 23);cin >> m1;
    gotoxy(40, 25);cout << LBLUE << "A" << endl;
    gotoxy(40, 27);cin >> m2;
    jugar(discos,m1,m2);
    j++;
    system("pause");
    }
    clrscr();
    gotoxy(40, 24); cout << "Deseas volver a jugar?" << endl;
    gotoxy(65, 24); cin >> b;
    }
    cout << "hasta pronto" << endl;

    return 0;
}
