#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;

    }
    int q;
    cin>>q;
    while(q--){
        char a;
        cin>>a;
        cout<<mpp[a]<<" ";
    }
}
// time complexity is (log n)

/*
unordered-map advantages
in this storing and fetching thie data 
the best and average case time complexity is o(1) in constant
in worst case is o(n)
priority to unordered map
then map

/*
worst case happen bcz of internal collision

//hashing
//1 Division method
//2 Folding method
//3 Mid Square Method

Division Method isme linear chain hoti h
[2,5,16,28,139,38,48,28,18]//keys
0=
1=
2=2
3=
4=
5=5
6=
7=
8=18,28,28,38,48
9=139

collision happen when all 
only one memory is used like
[8,18 ,28 ,38-------,1008]//yha p worst case hoga o(n)
so only one memory(hash place is same) is fill 8 

*/