#include <iostream>
using namespace std;
class Animal
{
public:
    void walking()
    {
        cout << "I am walking.." << endl;
    }
    void sleeping()
    {
        cout << "I am sleeping.." << endl;
    }
};
class lion
{
public:
    void roar()
    {
        cout << "I am roaring - mhaa mhaa" << endl;
    }
};

// single inheritance
class cat : public Animal
{
public:
    void purr()
    {
        cout << "I am purring - meow meow" << endl;
    }
};

// Multiple inheritance 
class dog : public Animal, public lion
{
public:
    void barking()
    {
        cout << "this is dog .I am barking - whaa whaa" << endl;
    }
};

int main()
{
    lion l1;
    l1.roar();
    // l1.sleeping();

    dog d1;
    d1.barking();
    d1.roar();

    return 0;
}