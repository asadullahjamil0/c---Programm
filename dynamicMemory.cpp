#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "address value of a is: " << ptr << endl;
    cout << "value of a is: " << *(ptr) << endl;

    int *p = new int(40);
    cout << "value of p is: " << p << endl;
    cout << "address value of p is: " << *p << endl;
    // we can do the same for other data type
    float *f = new float(40.45);
    cout << "value of p is: " << f << endl;
    cout << "address value of p is: " << *f << endl;

    // we can do the same for arrays as well
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // delete operator
    // delete[] arr;
    cout << "value of arr[0] is: " << arr[0] << endl;
    cout << "value of arr[1] is: " << arr[1] << endl;
    cout << "value of arr[2] is: " << arr[2] << endl;

    return 0;
}