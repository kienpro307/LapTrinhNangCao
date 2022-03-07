#include <bits/stdc++.h>

using namespace std;

bool ok(string s)
{
    if(s[0] >= '0' && s[0] <= '9')
        return false;
    if (s.size() < 6 || s.size() > 15)
        return false;
    for(int i = 0; i < s.size(); i++)
        if ((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9'))
            return false;
    return true;
}
int main()
{
    string ss;
    getline (cin,ss);
    if(ok(ss) == true) cout<<"Valid username.";
        else cout<<"Invalid username.";
}
