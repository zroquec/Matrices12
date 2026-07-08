#include <iostream>
using namespace std;

int main()
{
    int f, c;
    cin >> f;
    cin >> c;
    int Trans[f][c];
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> Trans[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << Trans[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}