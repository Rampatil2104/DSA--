#include <iostream>
using namespace std;

int main()
{
    /*
    A
    B C
    D E F
    G H I J
    */
    int x;
    cin >> x;
    char val = 'A';
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }
}