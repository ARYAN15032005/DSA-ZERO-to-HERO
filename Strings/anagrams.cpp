#include<bits/stdc++.h>
using namespace std;
bool anagram(string s,string goal){
    if(s.length()!=goal.length())
{
    return false;
}
sort(s.begin(),s.end());
sort(goal.begin(),goal.end());
for(int i=0;i<s.length();i++){
    if(s==goal){
    return true;}
}
return false;
}
int main(){

    string s,goal;
    cout<<"Enter string s:";
    cin>>s;
    cout<<"enter goal :";
    cin>>goal;
    if(anagram(s,goal)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
return 0;
}