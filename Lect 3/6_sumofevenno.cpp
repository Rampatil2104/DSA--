#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the no" << endl;
    cin >> x;
    int i = 1;
    int sum = 0;
    while (i <= x)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << sum;
}