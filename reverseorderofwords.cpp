#include<bits/stdc++.h>
using namespace std;
string reversestring(string s){
    string result="";
    vector<string> words;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            result+=s[i];
        }
        else{
            words.push_back(result);
            result="";
        }

    }
    if(result!=""){
        words.push_back(result);
    }
    reverse(words.begin(),words.end());
    string ans="";
    for(int i=0;i<words.size();i++){
        ans+=words[i];
        if(i!=words.size()-1){
            ans+=' ';
        }
    }
    return ans;
}



int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    cout<<"The reverse of this string is :"<<reversestring(s);
    return 0;
}