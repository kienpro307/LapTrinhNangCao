#include <bits/stdc++.h>

using namespace std;

class lenInInch
{
public:
    double l;
    lenInInch(): l(0) {};
    lenInInch(double _l): l(_l) {};
    lenInInch add(lenInInch other)
    {
        return lenInInch(l + other.l);
    }
};
int main()
{
    double a,b;
    cin >> a >> b;
    lenInInch f(a);
    lenInInch s(b);
    lenInInch add = f.add(s);
    cout << add.l;
}
