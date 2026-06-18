// Without using i+1
#include<iostream>
using namespace std;
void count(int i,int n){
    if(i<1){
        return;
    }
    count(i-1,n);
    cout<<i<<" ";
    
}
int main(){
    int n;
    cin>>n;
    count(n,n);
}