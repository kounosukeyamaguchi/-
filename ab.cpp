#include <iostream>
#include <string>
#define a = 0 //空白
#define b = 1 //黒
#define c = 2 //白
using namespace std;

int main()
{
    int math[8][8];
    int i,j;
    int y,x;

    for ( i = 1; i <= 8; i++)
    {
        for ( j = 0; j <= 8; j++)
        {
            math[i][j] = 0;
        }
    }
    
    while (-1)
    {
        cin >> x;
        cin >> y;
        math[x][y] = 1;
        for ( i = 1; i <= 8; i++)
        {
            cout << "\n";
            for ( j = 1; j <= 8; j++)
            {
                if (i == x&&j == y)
                {
                    cout << " " << math[x][y];   
                }
                else
                {
                    cout << " " << math[i][j];
                }
                if (math[i][j] != 0)
                {
                    break;
                }
            }
        }
        cout <<"\n";
    }
}