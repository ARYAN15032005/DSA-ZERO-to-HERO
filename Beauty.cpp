#include<bits/stdc++.h>
using namespace std;
int beauty(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        unordered_map<char,int> freq;
        for(int j=i;j<s.length();j++){
            freq[s[j]]++;
            int maxi=INT_MIN;
            int mini =INT_MAX;
            for(auto it:freq){
                maxi=max(maxi,it.second);
                mini=min(mini,it.second);
            }
            sum=sum+(maxi-mini);
        }
    }
    return sum;
}

int main(){
    string s;
    cout<<"Enter the string :";
    cin>>s;
    cout<<"The beauty of this string is :"<<beauty(s);
    return 0;
}