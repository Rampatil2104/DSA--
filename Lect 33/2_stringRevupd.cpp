#include<iostream>
using namespace std;

void reverse(string&s,int i, int j){
   //basecase
   if(i>j){
    return ; 
   }
   swap(s[i],s[j]);
   reverse(s,i+1,j-1);
}

int main(){
 
string name = "google";

reverse(name,0,name.length()-1);
cout<<name;
}