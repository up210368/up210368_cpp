#include <iostream>
#include <windows.h>
#define n 3
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

void IT(){
    char p=205;
    char pa=186;
    char co=202;
    for (int i = 0; i < 29; i++)
    {
        gotoxy( 11+i , 11 ); cout << p;
    }
    
    for (int i = 0; i <=3; i++)  {
        gotoxy( 20, 10-i ); cout << pa;
        gotoxy( 30, 10-i ); cout << pa;
    }

    gotoxy( 20, 11 ); cout << co;
    gotoxy( 30, 11 ); cout << co;
}

void ID(int matriz[][n]){
    char di=220;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j]!=0)
            {
                gotoxy( 15-(matriz[i][j]-1)/2 ,10-1*i);
                for (int k = 0; k < matriz[i][j]; k++)
                {
                    cout<<di;
                }
            }
        }
    }    
}

void LM(int matriz[][n]){
    int p=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==0) {
                matriz[i][j]=p;
                p=p-2;
            } else{
                matriz[i][j]=0;
            }
        }
    } 
}

int main(){
    int discos[n][n];
    LM(discos);
    clrscr();
    IT();
    ID(discos);
    gotoxy(60,20);
    return 0;
}