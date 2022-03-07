#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    bool check=true;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1;i <= n; i++)
        if (a[i] !=a [n + 1 - i])
    {
        check=false;
        break;
    }
    if(check == true) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
}
