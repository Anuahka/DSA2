#include<iostream>
using namespace std;
void name(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Anushka"<<endl;
    name(i+1,n);
}
int main(){
    int n;
    cin>>n;
    name(1,n);
}
// time complex=O(n) & space =O(n)