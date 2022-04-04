#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; ++i)
        if(a[i] != a[i-1] && a[i] != a[i+1]) b[t++] = a[i];
    for (int i = t - 1; i >= 0; --i) cout << b[i] << ' ';

}
