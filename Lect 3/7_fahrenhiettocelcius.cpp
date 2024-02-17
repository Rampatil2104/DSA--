#include <iostream>
using namespace std;

int main()
{
    float f;

    cout << "Enter the temp in fahrenhiet" << endl;
    cin >> f;

    float c = ((f - 32) * 5) / 9;

    cout << "Temp in celcius" << c;
}