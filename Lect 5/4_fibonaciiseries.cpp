#include<iostream>
using namespace std;

int main(){
    //fibonaciiseries
    //0,1,1,2,3,5,8,13
    int a=0;
    int b=1;
    int n;
    cin>>n;
    int sum =0;
    for (int i = 0; i < n; i++)
    {   
        sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        
    }
    return 0;
    
}