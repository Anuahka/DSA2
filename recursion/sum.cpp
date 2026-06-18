#include<iostream>
using namespace std;
// int add(int n , int sum){
//     if(n<1){
//         return sum;
//     }
   
//     add(n-1,sum+n);
    
// }
int Sum(int n){
    if(n==0){
        return 0;
    }
    return n + Sum(n-1) ;
}

int main(){
    int n;
    cin>>n;

    // int sum=add(n,0);
    // cout<<sum;
cout<<Sum(n);
}