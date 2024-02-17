#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[100];
    int sum =0;

    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    }