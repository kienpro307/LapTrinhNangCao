#include <bits/stdc++.h>

using namespace std;

class area
{
public:
    double length, breadth, S;
    void input()
    {
        cin >> length >> breadth;
    }
    void returnArea()
    {
        S=length*breadth;
        cout << S;
    }
};

int main()
{
    area land;
    land.input();
    land.returnArea();
}
