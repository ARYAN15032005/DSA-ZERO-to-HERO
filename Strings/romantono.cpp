#include<bits/stdc++.h>
using namespace std;
int romantonumber(string s){
    unordered_map<char,int> roman={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
    {'C',100},
{'D',500},
{'M',1000}    };

int res=0;
for(int i=0;i<s.length();i++){
    if(roman[s[i]]<roman[s[i+1]]){
        res=res-roman[s[i]];
    }
    else{
        res+=roman[s[i]];
    }

}
return res;


}

int main(){
    string s;
    cout<<"Enter a roman no. :";
    cin>>s;
    cout<<"The interger value for this particular roman number is :"<<romantonumber(s);
    return 0;
}