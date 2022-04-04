#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    getline (cin, a);
    int n = a.length();
    for (int i = 0; i < n; ++i)
    {
        if(a[i] == a[i+1])
        {
            a.insert(i + 1, "*");
            i++;
            n++;
        }
    }
    for (int i = 0; i < n; ++i) cout << a[i];
}
