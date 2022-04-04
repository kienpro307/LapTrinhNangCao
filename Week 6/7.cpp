#include <bits/stdc++.h>

using namespace std;

class Employee
{
public:
    string name;
    int year_of_joining;
    int salary;
    string address;
    void input()
    {
        cin.ignore();
        getline(cin, name);
        cin >> year_of_joining;
        cin.ignore();
        getline(cin, address);
    }
    void output()
    {
        cout << name << ' ' << year_of_joining << ' ' << address << endl;
    }
};

int main()
{
    Employee a1, a2, a3;
    a1.input();
    a2.input();
    a3.input();
    a1.output();
    a2.output();
    a3.output();
}
