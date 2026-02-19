#include<bits/stdc++.h>
using namespace std;
string commonsubtr(vector<string> s){
    if(s.size()==0){
        return "";
    }
    sort(s.begin(),s.end());
    string ans="";
    string first=s[0];
    string last=s[s.size()-1];
    int min_length=(min(first.size(),last.size()));
    for(int i=0;i<min_length;i++){
        
        if(first[i]!=last[i]){
            break;
        }
        ans+=first[i];
    }
    return ans;
}
int main(){

    int n;
    cout<<"Enter N :";
    cin>>n;
    vector<string> allStrings;
    string temp;

    for(int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> temp;
        allStrings.push_back(temp); // Store the whole string
    }
    cout<<"The common substring is :"<<commonsubtr(allStrings);
return 0;
}