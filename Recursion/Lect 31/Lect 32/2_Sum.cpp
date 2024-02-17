#include<iostream>
using namespace std;

int isSum(int arr[], int size){
    //basecase
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaningPart = isSum(arr+1,size-1);
    int Sum = arr[0]+remaningPart;
    return Sum;
}

int main(){

   int arr[5] = {1,1,1,1,1};
   int size = 5;
   int ans = isSum(arr, size);
   cout<<ans;

}