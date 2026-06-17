#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string str="amma";
    string str1=str;
    reverse(str1.begin(),str1.end());

    if(str==str1){
        cout<<"palindrom";
    }
    else{
        cout<<"notpalindrom";
    }
     

   

}