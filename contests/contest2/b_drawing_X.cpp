#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1 - i && j == i)
            {
                cout << "X";
            }
            else if (j == n - 1 - i)
            {
                cout << "/";
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}