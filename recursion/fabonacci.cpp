#include<iostream>
using  namespace std;
int fabo(int n){
    if(n<=1){
        return n;
    }
    int last = fabo(n-1);
    int slast= fabo(n-2);

    return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<fabo(n);
}