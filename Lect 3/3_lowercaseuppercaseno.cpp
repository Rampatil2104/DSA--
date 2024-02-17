#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "uppercase character" << endl;
    }

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase character" << endl;
    }
    else
    {
        cout << "integer";
    }
}