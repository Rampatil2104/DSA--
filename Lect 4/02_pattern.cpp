#include <iostream>
using namespace std;

int main()
{
    /*
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
    */
    int x;
    cin >> x;
    for (int i = x; i >= 1; i--)
    {
        for (int j = x; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}