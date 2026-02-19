#include<bits/stdc++.h>
using namespace std;
bool commonsubtr(string s,string goal){
    if(s.length()!=goal.length()){
        return false;
    }    
    for(int i=0;i<s.length();i++){
        string combined=s.substr(i)+s.substr(0,i);
        if(combined==goal){
            return true;
        }
    }
    return false;
}
int main(){

    string s,goal;
    cout<<"Enter string s:";
    cin>>s;
    cout<<"enter goal :";
    cin>>goal;
    if(commonsubtr(s,goal)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
return 0;
}