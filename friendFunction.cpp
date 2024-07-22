#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    // below lines means it is allowed for sumComplex function to access private data in class complex
    // cannot be called by the object of class complex
    // it usually contain objects as an arguements
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}