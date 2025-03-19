#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int rollno;
};
class teacher
{
public:
    string subject;
    double selery;
};
class TA : public teacher, public student
{
};
int main()
{
    TA t1;
    t1.name = "hitesh";
    t1.selery = 25000;
    cout << t1.name << endl;
    cout << t1.selery << endl;

    return 0;
}