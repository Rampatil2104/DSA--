#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << "is greater than" << b;
    }
    if (b > a)
    {
        cout << b << "is greater than" << a;
    }
    else
    {
        cout << a << "=" << b;
    }
}