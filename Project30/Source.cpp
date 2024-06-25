#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    const size_t a = 1, b = 4;
    int arr[a][b];
    int n;
    cin >> n;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = n * 2;
            n *= 2;
            cout << arr[i][j] << " ";

        }

    }
    const size_t s = 1, f = 4;
    int arr[s][f];
    int r;
    cin >> r;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < f; j++)
        {
            arr[i][j] = r + 1;
            r += 1;
            cout << arr[i][j] << " ";

        }

    }

}