#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[100], b[100];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];

    bool check = true;
    for (int i = 1; i <= n; ++i)
        if (a[i] != b[i]) check = false;

    if(check) cout << "YES"; else cout << "NO";
}
