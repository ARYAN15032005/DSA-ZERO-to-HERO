#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int hash[256]={0};
    for(int i=0;i<str.size();i++){//i++ is used to move to next character of a string
        hash[str[i]]++;//arr[...]++ is used to move to next position of the array.
    }
    int q;
    
    cout<<"Enter the number of elements you wanna find hash for :";
    cin>>q;
    while(q--){
        char c;
    
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;

}
