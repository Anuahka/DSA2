// without using i-1
#include<iostream>
using namespace std;
void reverse(int i,int n){
    if(i>n){
        return;
    }
    reverse(i+1,n);
    cout<<i<<" ";
    
}
int main(){
    int n;
    cin>>n;

    reverse(1,n);
}