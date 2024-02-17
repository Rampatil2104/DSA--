/*
    1 2 3
    4 5 6
    7 8 9
    */
#include <iostream>
using namespace std;

int main()
{
    int x;
    int y = 1;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << y++;
        }
        cout << endl;
    }
}