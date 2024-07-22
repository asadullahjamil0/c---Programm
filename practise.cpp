#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    Student()
    {
        id = 0;
        name = "Unknown";
    }

    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    void showDetail()
    {
        cout << "ID of student is: " << id << endl;
        cout << "name of student is: " << name << endl;
    }
};

int main()
{
    Student s1(4646932,"Asadullah");
    s1.showDetail();

    return 0;
}