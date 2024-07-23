#include <iostream>
using namespace std;

class OtherClass
{
public:
    int value;
    OtherClass(int val) : value(val) {} // Constructor with initializer list
};

class ConstantMemberClass
{
private:
    const OtherClass other; // Constant member of type OtherClass

public:
    // Constructor using an initializer list to initialize the constant member
    ConstantMemberClass(int val) : other(val) {}

    void display() const
    {
        cout << "OtherClass value: " << other.value << endl;
    }
};

int main()
{
    ConstantMemberClass obj(10); // Initialize the constant member via constructor
    obj.display();

    return 0;
}
