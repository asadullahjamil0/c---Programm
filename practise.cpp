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

    Student(string n, int i)
    {
        name = n;
        id = i;
    }

    void showDetail()
    {
        cout << "ID of student is: " << id << endl;
        cout << "name of student is: " << name << endl;
    }
};

int main()
{
    Student s1, s2(4646932, "Asadullah"), s3("Bial", 897);

    s1.showDetail();
    s2.showDetail();
    s3.showDetail();

    return 0;
}