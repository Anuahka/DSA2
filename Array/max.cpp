#include<iostream>
using namespace std;
int maxii(int arr[],int n){
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
      
            maxi=max(maxi,arr[i]);
     
     
    }
     return maxi;
}
void print(int arr[],int n)
{
    cout<<"write the array"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 
int main(){
    int n;
    cout<<"enter the n"<<" ";
    cin>>n;

    int arr[100];
    print (arr,n);
   cout << "Maximum value is: " << maxii(arr, n) << endl;
   return 0;
}
