#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "BookkooB";
    cout << endl;

    if(checkPalindrome(name, 0, name.length()-1)) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}