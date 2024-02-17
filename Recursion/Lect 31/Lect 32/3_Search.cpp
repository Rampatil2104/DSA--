#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
 //base case
 if(size==0){
    return false;
 }
 if(key == arr[0]){
    return true;
 }
 else{
   return linearSearch(arr+1,size-1,key);
 };

};

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 1;
    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}