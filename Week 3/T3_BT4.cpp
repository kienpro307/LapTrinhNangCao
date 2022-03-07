#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double ar[1005], x;
    cin >> n;
    for (int  i = 1; i <= n; ++i) cin >> ar[i];
    cin >> x;

    int position;

    for (int i = 1; i <= n; ++i)
    {
        if (x >= ar[i] && ar[i + 1] >= x) position = i+1;
        if(x <= ar[1]) position = 1;
        if(x >= ar[n]) position = n + 1;
    }
    if(position == n + 1) ar[n+1] = x; else

    for (int i = n+1; i > position; i--)
        ar[i] = ar[i - 1];
    ar[position] = x;
    for (int i = 1; i <= n + 1; ++i) cout << fixed << setprecision(2) << ar[i] << ' ';
}
