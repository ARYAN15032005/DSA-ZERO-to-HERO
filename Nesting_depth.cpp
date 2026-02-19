#include<bits/stdc++.h>
using namespace std;
int nestingdeptyh(string s){
    int depth=0;
    int pointer=0;

for(char ch:s){
    if(ch=='('){
        pointer++; }   
    else if(ch==')'){
        pointer--;
    }
    depth=max(depth,pointer);
}
return depth;
}

int main(){
    string s;
    cout<<"Enter a roman no. :";
    cin>>s;
    cout<<"The interger value for this particular roman number is :"<<nestingdeptyh(s);
    return 0;
}