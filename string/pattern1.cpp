#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=start;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
        start-=2;
    }
    for(int i=2;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(i-1);j++){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
