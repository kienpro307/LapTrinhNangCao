#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n < 0) n = - n;

    int numOfnum = 0;
    do
    {
        n/=10;
        numOfnum++;
    } while (n > 0);
    cout << numOfnum;
}
