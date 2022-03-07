#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    const int MAX_N = 1005;
    double arrayX[MAX_N], sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum / n;

    double anws = 0;
    for (int i = 1; i <= n; ++i)
        anws = anws + (arrayX[i] - mean)*(arrayX[i] - mean);
    anws /= n;
    cout << fixed << setprecision(2) << anws;
}
