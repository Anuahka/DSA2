// map is always store in sorted order, so we can use binary search to find the element in O(log n) time complexity.
// in dsc order
#include<map>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   map<int ,int> count;
   for(int i=0;i<n;i++){
    count[arr[i]]++;
   }
   int q;
   cin>>q;
   while(q--){
    int number;
    cin>>number;
    cout<<count[number]<<" ";
   }
}