#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    const int N = 1005;
    double arrayX[N];

    for (int i = 1; i <= n; ++i) cin >> arrayX[i];
    for (int i = n; i > 0; i--) cout << fixed << setprecision(2) << arrayX[i] << ' ';
}
