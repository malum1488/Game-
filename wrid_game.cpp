#include <iostream>
#include <time.h>
#include <locale.h>
#include <stdlib.h>


using namespace std;




//массив для полей
const int N = 10;
int map [N][N] = {0};
char comp_map [N][N] = {0};
int x;
int y;

void start()
{
    int i;
    cout << "Hello my Frend\n";
    cout << "please enter One start game/ Two exit\n"
    cin >> i;
    if(i==1)
    {
        cout << "start game!!\n";
    }
    else
    {
        cout << "bayyyy!!\n";
    }

}

void setup()
{
 srand(time(0));
    //Размещение однопалубных кораблей
    for (int i = 0; i < 4; i++)
        {
            x = rand() % N;
            y = rand() % N;
            comp_map[x][y] = 98;
        }
}
void draw()
{
    for(int i = 0; i < N; i++)
    {
        for (int j=0; j < N; i++)
        {
            if (map[i][j] == 0)
            {
                cout << "-";
            }
            else
                {
                    cout << map[i][j];
                }
        }
        cout << endl;

    }
    cout << endl;
       //противник
       //
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (comp_map[j][i] == 0)
            {
                cout << "-";
            }
            else
            {
                cout << comp_map[j][i];
            }
        }
        cout << endl;
    }
}


int main()
{
    start();
    setup();
    draw();
return 0;
}



