#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 20;

int birdY = HEIGHT / 2;
int birdX = 5;

int pipeX = WIDTH - 1;
int pipeGap = 6;
int pipeTop;

int score = 0;
bool gameOver = false;


void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void setupPipe()
{
    pipeTop = rand() % (HEIGHT - pipeGap - 3) + 1;
}


void draw()
{
    system("cls");

    for(int y = 0; y < HEIGHT; y++)
    {
        for(int x = 0; x < WIDTH; x++)
        {
            if(x == birdX && y == birdY)
                cout << "O";

            else if(x == pipeX && 
                   (y < pipeTop || y > pipeTop + pipeGap))
                cout << "|";

            else
                cout << " ";
        }

        cout << endl;
    }

    cout << "Score : " << score << endl;
    cout << "Tekan SPACE untuk terbang" << endl;
}


void input()
{
    if(_kbhit())
    {
        char tombol = _getch();

        if(tombol == ' ')
        {
            birdY -= 3;
        }
    }
}


void logic()
{
    birdY++;

    pipeX--;

    if(pipeX == 0)
    {
        pipeX = WIDTH - 1;
        setupPipe();
        score++;
    }


    if(birdY < 0 || birdY >= HEIGHT)
    {
        gameOver = true;
    }


    if(pipeX == birdX)
    {
        if(birdY < pipeTop || birdY > pipeTop + pipeGap)
        {
            gameOver = true;
        }
    }
}


int main()
{
    srand(time(0));

    setupPipe();

    while(!gameOver)
    {
        draw();
        input();
        logic();

        Sleep(120);
    }


    system("cls");

    cout << "====================" << endl;
    cout << "     GAME OVER      " << endl;
    cout << "====================" << endl;
    cout << "Score akhir : " << score << endl;

    system("pause");

    return 0;
}
