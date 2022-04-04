#include <bits/stdc++.h>

using namespace std;

class Student
{
public:

    string name;
    int roll_no;
    void input(int _roll_no, string _name)
    {
        roll_no = _roll_no;
        name = _name;
    }
};

int main()
{
    Student john;
    john.input(2, "john");
}
