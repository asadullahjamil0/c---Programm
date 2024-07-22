#include <iostream>
#include <iomanip>
using namespace std;
ostream &currency(ostream &output)
{
    output << "RS.";
    return (output);
}

int main()
{
    cout << currency << 3.2434 << endl;

    return 0;
}