#include <iostream>
using namespace std;

class Array
{
    int array[5];

public:
    void input();
    void display();
    void max();
    void min();
};

void Array ::input()
{
    cout << "Enter values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
}
void Array ::display()
{
    cout << "Entered values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
}
void Array ::max()
{
    int mx = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (mx < array[i])
        {
            mx = array[i];
        }
    }
    cout << "Maximum value you entered is: " << mx << endl;
}
void Array ::min()
{
    int mn = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (mn > array[i])
        {
            mn = array[i];
        }
    }
    cout << "Minimum value you entered is: " << mn << endl;
}

int main()
{
    Array a1;
    a1.input();
    a1.display();
    a1.max();
    a1.min();

    return 0;
}