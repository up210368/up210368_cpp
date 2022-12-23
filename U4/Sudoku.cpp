#include <time.h>
#include <windows.h>

#include <iostream>

#include "color.h"
#define n 9
using namespace std;

void clrscr() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
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

int verificarC(int sudoku[n][n], int vuelta) {
    int coincidencia = 0;
    for (int i = 0; i < vuelta; i++) {
        if (sudoku[0][i] == sudoku[0][vuelta]) {
            coincidencia++;
            break;
        }
    }
    return coincidencia;
}

void MMS(int ms[n][n]) {
    int NR;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            NR = 0 + rand() % 10;
            if (NR <= 2) {
                ms[i][j] = 1;
            } else {
                ms[i][j] = 0;
            }
        }
    }
}

void LM(int sudoku[n][n]) {
    int NR;
    int ve = 0;
    int mover = 0;
    for (int i = 0; i < n; i++) {
        do {
            NR = 1 + rand() % (9);
            sudoku[0][i] = NR;
            ve = verificarC(sudoku, i);
        } while (ve != 0);
    }
    ve = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n / 3; j++) {
            mover = i * 3 + 3 * j + ve;
            sudoku[i][j * 3] = sudoku[0][(mover) % 9];
            sudoku[i][j * 3 + 1] = sudoku[0][(mover + 1) % 9];
            sudoku[i][j * 3 + 2] = sudoku[0][(mover + 2) % 9];
        }
        if (i == 2 || i == 5) {
            ve++;
        }
    }
}

void Imprimir_tablero() {
    char Esq1 = 201;
    char Esq2 = 187;
    char Esq3 = 200;
    char Esq4 = 188;
    char ParVer = 186;
    char ParHor = 205;
    char Union = 206;
    char UnionLD = 185;
    char UnionLI = 204;
    char UnionA = 203;
    char UnionAb = 202;

    for (int i = 0; i < n; i++) {
        gotoxy(32 + 4 * i, 0);
        cout << WHITE << i;
    }

    for (int i = 0; i < n; i++) {
        gotoxy(29, 2 + 2 * i);
        cout << WHITE << i;
    }

    for (int i = 0; i < 36; i++) {
        gotoxy(30 + i, 3);
        cout << LBLUE << ParHor;
        gotoxy(30 + i, 5);
        cout << LBLUE << ParHor;
        gotoxy(30 + i, 9);
        cout << LBLUE << ParHor;
        gotoxy(30 + i, 11);
        cout << LBLUE << ParHor;
        gotoxy(30 + i, 15);
        cout << LBLUE << ParHor;
        gotoxy(30 + i, 17);
        cout << LBLUE << ParHor;
    }

    for (int i = 0; i <= 18; i++) {
        if (i % 2 != 0) {
            gotoxy(34, 19 - i);
            cout << LBLUE << ParVer;
            gotoxy(38, 19 - i);
            cout << LBLUE << ParVer;
            gotoxy(46, 19 - i);
            cout << LBLUE << ParVer;
            gotoxy(50, 19 - i);
            cout << LBLUE << ParVer;
            gotoxy(58, 19 - i);
            cout << LBLUE << ParVer;
            gotoxy(62, 19 - i);
            cout << LBLUE << ParVer;
        } else {
            gotoxy(34, 19 - i);
            cout << LBLUE << Union;
            gotoxy(38, 19 - i);
            cout << LBLUE << Union;
            gotoxy(46, 19 - i);
            cout << LBLUE << Union;
            gotoxy(50, 19 - i);
            cout << LBLUE << Union;
            gotoxy(58, 19 - i);
            cout << LBLUE << Union;
            gotoxy(62, 19 - i);
            cout << LBLUE << Union;
        }
    }

    for (int i = 0; i < 36; i++) {
        if (i % 4 == 0) {
            gotoxy(30 + i, 1);
            cout << GREEN << UnionA;
            gotoxy(30 + i, 7);
            cout << GREEN << Union;
            gotoxy(30 + i, 13);
            cout << GREEN << Union;
            gotoxy(30 + i, 19);
            cout << GREEN << UnionAb;
        } else {
            gotoxy(30 + i, 1);
            cout << GREEN << ParHor;
            gotoxy(30 + i, 7);
            cout << GREEN << ParHor;
            gotoxy(30 + i, 13);
            cout << GREEN << ParHor;
            gotoxy(30 + i, 19);
            cout << GREEN << ParHor;
        }
    }

    for (int i = 0; i <= 16; i++) {
        if (i % 2 != 0) {
            gotoxy(30, 18 - i);
            cout << GREEN << UnionLI;
            gotoxy(42, 18 - i);
            cout << GREEN << Union;
            gotoxy(54, 18 - i);
            cout << GREEN << Union;
            gotoxy(66, 18 - i);
            cout << GREEN << UnionLD;
        } else {
            gotoxy(30, 18 - i);
            cout << GREEN << ParVer;
            gotoxy(42, 18 - i);
            cout << GREEN << ParVer;
            gotoxy(54, 18 - i);
            cout << GREEN << ParVer;
            gotoxy(66, 18 - i);
            cout << GREEN << ParVer;
        }
    }

    gotoxy(30, 1);
    cout << GREEN << Esq1;
    gotoxy(30, 19);
    cout << GREEN << Esq3;
    gotoxy(66, 1);
    cout << GREEN << Esq2;
    gotoxy(66, 19);
    cout << GREEN << Esq4;
}

void Imprimir_Numeros(int sudoku[n][n], int ms[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ms[i][j] == 1) {
                gotoxy(32 + 4 * j, 2 + 2 * i);
                cout << RED << sudoku[i][j];
            }
        }
    }
}

boolean Revisar_Victoria(int ms[n][n]){
    boolean gano=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ms[i][j]==0)
            {
                gano=true;
                break;
            }     
        }
    }
    return gano;
}

int main() {
    srand(time(NULL));
    int sudoku[n][n];
    int ms[n][n];
    int jugada[3];
    boolean faltan=true;
    int intentos = 0;
    LM(sudoku);
    MMS(ms);
    while (intentos != 4 && faltan) {
        clrscr();
        Imprimir_tablero();
        Imprimir_Numeros(sudoku, ms);
        gotoxy(70,2);cout<<"Fallos: "<<intentos<<" de 3";
        gotoxy(0, 20);
        cout << "Ingresa la Fila: ";
        cin >> jugada[0];
        cout << "Ingresa la columna: ";
        cin >> jugada[1];
        cout << "Ingresa el numero: ";
        cin >> jugada[2];
        if (ms[jugada[0]][jugada[1]]==0) {
            if (sudoku[jugada[0]][jugada[1]] == jugada[2]) {
                ms[jugada[0]][jugada[1]] = 1;
            } else {
                intentos++;
                cout<<"Fallo"<<endl;system("pause");
            }
        } else{
            cout<<"Ya hay un numero ahi"<<endl;system("pause");
        }
        faltan=Revisar_Victoria(ms);
    }
    if (faltan==false)
    {
        gotoxy(40,24);cout<<endl<<MAGENTA<<"FELICIDADES"<<endl;system("pause");
    }  else {
        gotoxy(40,24);cout<<endl<<MAGENTA<<"Suerte para la proxima"<<endl;system("pause");
    }
    return 0;
}