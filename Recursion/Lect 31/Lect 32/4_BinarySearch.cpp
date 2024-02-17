#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start,int end, int key){
   //basecase
 
  int mid   = (start+end)/2;
   if(start>end){
     return false;    
   }

  if(arr[mid]==key){
   return true;
  }
  if(arr[mid]>key){
    return binarySearch(arr,start, mid-1, key);
  }
  else{
    return binarySearch(arr,mid+1,end,key);
  }
};

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 2;
    bool ans = binarySearch(arr, 0, 5, key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}