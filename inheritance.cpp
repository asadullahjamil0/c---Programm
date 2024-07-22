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
class lion : public Animal
{
public:
    void roar()
    {
        cout << "I am roaring - mhaa mhaa" << endl;
    }
};
class cat : public Animal
{
public:
    void purr()
    {
        cout << "I am purring - meow meow" << endl;
    }
};
class dog : public Animal
{
public:
    void barking()
    {
        cout << "I am barking - whaa whaa" << endl;
    }
};

int main()
{
    lion l1;
    l1.roar();
    l1.sleeping();

    dog d1;
    d1.barking();

    return 0;
}