#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Id[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                Id[i][j] = 1;
            }
            else
            {
                Id[i][j] = 0;
            }
        }
    }
    return 0;
}