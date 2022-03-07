#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    int numDog = totalLegs / 4, numChicken;

    for (int i = numDog; i >= 0; i--)
    {
        if((i*4 + (total - i)*2) == totalLegs)
        {
            numDog = i;
            numChicken = total - i;
            flag = true;
            break;
        }
    }

    if(flag) cout << "chicken = " << numChicken << ", dog = " << numDog;
    else cout << "invalid";
}
