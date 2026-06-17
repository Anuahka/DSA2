#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the no.";
   cin>>n;
   int arr[10];
    cout<<"enter the array";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}