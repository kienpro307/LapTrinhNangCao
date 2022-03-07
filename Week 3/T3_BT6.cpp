#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int num = 1;
    if(s[0] == ' ') num--;
    for (int i = 1; i < s.size(); i++)
        if(s[i] != ' ' && s[i - 1] == ' ') num++;
    cout << num;
}
