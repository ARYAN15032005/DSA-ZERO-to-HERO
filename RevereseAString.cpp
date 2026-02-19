#include<bits/stdc++.h>
using namespace std;
string reversestring(string s){
    string result="";
    for(int i=s.length()-1;i>=0;i--){
        result+=s[i];
    }
    return result;
}
int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"The reverse of this string is :"<<reversestring(s);
    return 0;
}