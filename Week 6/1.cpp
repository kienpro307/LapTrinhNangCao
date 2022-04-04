#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        b[(i+n-d)%n] = a[i];
    for (int i = 0; i <n; ++i) cout << b[i] << ' ';
}
