#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;

    int t = sqrt(lowerBound);
    if (t*t < lowerBound) t++;

    for (int i = t; i <= sqrt(upperBound); ++i)
        cout << i*i << ' ';
    return 0;
}
