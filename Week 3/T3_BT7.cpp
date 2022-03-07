#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int demChu = 0;
    int demSo = 0;
    int demDau = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'A' && s[i]<='Z') || (s[i] >= 'a' && s[i] <= 'z')) demChu++;
        else if (s[i] >= '0' && s[i] <= '9') demSo++;
        else demDau++;
      }
      cout << demChu << " " << demSo << " " << demDau;

}
