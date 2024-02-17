#include <iostream>
using namespace std;

int main()
{
    /*
    A A A
    B B B
    C C C
    */
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            char val = 'A' + i - 1;
            cout << val;
        }
        cout << endl;
    }
}