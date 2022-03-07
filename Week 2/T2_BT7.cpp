#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    cin >> x;

    double sum = 1, oldSum = 0, xMuI = 1;
    int i = 1;
    do
    {
        oldSum = sum;
        sum = oldSum + xMuI * x / i;
        xMuI = xMuI * x / i;
        i++;
    } while (sum - oldSum > 0.001);
    cout << fixed << setprecision(4) << sum;
}
