#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool isprime = true;
        if (i < 2)
        {
            isprime = false;
        }
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
            }
        }

        if (isprime)
        {
            cout << i << " ";
        }
    }
    return 0;
}