#include <iostream>
using namespace std;
/*
Write a program to print the following pattern (for n=4) :

    * * * *
    * * * *
    * * * *
    * * * *
*/

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
