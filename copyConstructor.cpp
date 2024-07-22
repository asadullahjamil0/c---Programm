#include <iostream>
using namespace std;

class student
{
    int id;
    string name;

public:
    void in()
    {
        cout << "Enter your id " << id << endl;
        cin >> id;
        cin.ignore();
        cout << "Enter your name " << name << endl;
        cin >> name;
    }
    void display()
    {
        cout << "Your id is: " << id << endl;
        cout << "Your name is: " << name << endl;
    }
};

int main()
{
    student s1;
    s1.in();
    student s2(s1);
    s1.display();
    s2.display();

    return 0;
}