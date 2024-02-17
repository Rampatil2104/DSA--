#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapArray(int arr[], int size){
    for (int i = 0; i < size-1; i+=2)
    {
         swap(arr[i],arr[i+1]);
    }
    
    
}

int main(){
    //swap alt
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter arr elemets"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"current array"<<endl;
    printArray(arr, size);
    swapArray(arr, size);
    cout<<"after conversion"<<endl;
    printArray(arr, size);
}