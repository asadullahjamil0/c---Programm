#include <iostream>
using namespace std;
int c = 345;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // c = a + b;
    // cout << "Value of c is :" << c << endl;
    // cout << "The value of global c is:" << ::c << endl;

    // Refernece variables
    // float x = 355;
    // float &y = x;
    // system("cls");
    // cout << "value of x is: " << x << endl;
    // cout << "value of y is: " << y << endl;

    // TypeCasting
    int a = 23;
    float b = 45.567;
    cout << "Value of a is: " << float(a) << endl;
    cout << "Value of b is: " << int(b) << endl;

    // we can also write like this
    cout << "Value of a is: " << (float)a << endl;
    cout << "Value of b is: " << (int)b << endl;

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;
    return 0;
}