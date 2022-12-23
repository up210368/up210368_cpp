#include <windows.h>
#include <iostream>
#define n 3
using namespace std;
string ROSE = "\033[95m";
string CYAN = "\033[96m";
string VERDE = "\033[92m";
string Amarillo = "\033[93m";
string Magenta = "\x1b[35m";

void clrscr() { // metodo para windows
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y) { // metodo para windows
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}

void torres() {
    system("cls");
    clrscr();
    char col = 186;
    char fil = 205;
    char cruz = 202;
    for (int i = 0; i <= 24; i++) {
        if (i==3 || i ==11 || i ==19)
        {
            gotoxy(11+i, 15); cout << CYAN << cruz;
        }else
        {
            gotoxy(11+i, 15); cout << ROSE << fil;
        }
    }
    for (int i = 0; i <4; i++)  {
        gotoxy( 14, 11+i ); cout << CYAN << col ;
        gotoxy( 22, 11+i ); cout << CYAN << col ;
        gotoxy( 30, 11+i ); cout << CYAN << col ;
    }

}

void Discos(int matriz[][n]) {
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

int main(int argc, char const *argv[]) {
    clrscr();
    system("cls");
    torres();
    int j = 0;
    int discos [n][n];
    string b;
    gotoxy(40, 10); cout << Amarillo << "Torres de hanoi" << endl;
    gotoxy(40, 12); cout << Amarillo << "Quieres iniciar el juego?" << endl;
    gotoxy(40, 15); cin >> b;

    while (b == "si")
    {
        Discos(discos);
        cout << VERDE << "Ingresa tu jugada" << endl;
        while (j <= 200)
        {
            clrscr();
            torres();
            Discos(discos);
            j++;
            system("pause");
        }
        printf("Quieres seguir jugando?\n");
        cin >> b;
    }
    gotoxy(80,28);
    return 0;
}
