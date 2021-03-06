#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int MAX_N = 1005;
    int n;
    cin >> n;

    double vectorA[MAX_N], vectorB[MAX_N];
    for (int i = 1; i <= n; ++i) cin >> vectorA[i];
    for (int i = 1; i <= n; ++i) cin >> vectorB[i];

    double product = 0;
    for (int i = 1; i <= n; ++i) product += vectorA[i] * vectorB[i];

    cout << fixed << setprecision(2) << product;
}
