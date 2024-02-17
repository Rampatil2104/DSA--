#include <iostream>
using namespace std;
//check prime no

int main(){
    int n ;
    cin>>n;
    for(int i =2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime";
            break;
        }
        else
        {           
        cout<<"prime"; 
        break;
        }
    }
    return 0;
}