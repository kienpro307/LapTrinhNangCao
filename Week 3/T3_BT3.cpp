#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1005];
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i < n; ++i)
        for (int j = i+1; j <= n; ++j)
            if(a[i] > a[j]) swap(a[i] , a[j]);
    a[0] = a[1] - 1;
    for (int i = 1; i <= n; ++i) if(a[i] != a[i-1]) cout << a[i] << ' ';
}
