#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    srand(time(0));

    int burung = 10;
    int pipa = 50;
    int lubang = rand() % 10 + 5;
    int skor = 0;

    char tombol;

    while(true)
    {
        system("cls");

        cout << "Score: " << skor << endl;
        cout << endl;

        for(int y = 0; y < 20; y++)
        {
            if(y == burung)
                cout << "          O";

            else if(y < lubang || y > lubang + 5)
            {
                if(pipa == 10)
                    cout << "          |";
                else
                    cout << "";
            }

            cout << endl;
        }

        cout << "\nTekan SPACE untuk lompat\n";

        // gravitasi
        burung++;

        // input lompat
        if(kbhit())
        {
            tombol = getch();

            if(tombol == ' ')
            {
                burung -= 3;
            }
        }

        // pipa bergerak
        pipa--;

        if(pipa <= 0)
        {
            pipa = 50;
            lubang = rand() % 10 + 5;
            skor++;
        }

        // kalah
        if(burung <= 0 || burung >= 20)
        {
            system("cls");
            cout << "GAME OVER\n";
            cout << "Score: " << skor;
            break;
        }

        Sleep(100);
    }

    return 0;
}
