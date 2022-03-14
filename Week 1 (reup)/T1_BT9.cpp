#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, p, dienTichTamGiac;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    if((a+b) > c && (a+c) > b && (b+c) > a)
    {
        dienTichTamGiac = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << dienTichTamGiac;
    } else cout << "invalid";
}
