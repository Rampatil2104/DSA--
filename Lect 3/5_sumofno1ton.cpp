#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the no" << endl;
    cin >> x;
    int i = 1;
    int sum = 0;
    while (i <= x)
    {
        sum = sum + i;
        i++;
    }

    cout << sum;
}