#include <iostream>
using namespace std;

/*Write a program to print the following pattern (for n=4) :

    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4*/

int main()
{
    int x;
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}