#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double a[100];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
        if(a[i] < a[j]) swap (a[i] , a[j]);

    for (int i = 1; i <= n; ++i)
        cout << fixed << setprecision(2) << a[i] << ' ';
}
