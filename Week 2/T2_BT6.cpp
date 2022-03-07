#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n + 1; ++i)
    {
        for (int j = 1; j <= 2*n + 1; ++j)
            if(i <= n+1)
            {
                if(j >= n + 2 - i && j <= n + i) cout << "* ";
                else cout << ". ";
            } else {
                if(j >= i - n && j <= 2*n + 1 - (i - n - 1)) cout << "* ";
                else cout << ". ";
            }
        cout << endl;
    }
}
