#include <bits/stdc++.h>

using namespace std;

class student
{
    public:
    int no;
    string name;
    int age;
    double mark;

    student(): no(0), name(""), age(0), mark(0) {}

    student(int _no, string _name, int _age, double _mark):
    no(_no), name(_name), age(_age), mark(_mark){}

    void studentinput()
    {
        cin >> no;
        cin.ignore();
        getline(cin, name);
        cin >> age >> mark;
    }
};

int main()
{
    vector <student*> students;
    for (int i = 0; i < 5; ++i)
    {
        student* stu = new student();
        stu -> studentinput();
        students.push_back(stu);
    }
     cout << students[1]->no << " " << students[1]->name << " " << students[1]->age << " " << students[1]->mark << "\n";
}
