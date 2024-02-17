#include <iostream>
using namespace std;

int main()
{
    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            char val = 'A' + j - 1;
            cout << val;
        }
        cout << endl;
    }
}