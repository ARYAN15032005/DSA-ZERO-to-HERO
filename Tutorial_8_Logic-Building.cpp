#include<iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    //i=1,j=3
    //i=2,j=2,3,4
    //i=3,j=1,2,3,4,5
    /*
    _ _ _ * 
    _ _ * * *
    _ * * * * *
    */
    for(i=1;i<=n;i++){
        for(int j =1;j<=n+1-i;j++){
            cout<<" ";
        } 
        for(int j =1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        for(int j =1;j<=n+1-i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    for(i=1;i<=n;i++){
        for(int j =1;j<=i-1;j++){
            cout<<" ";
        } 
        for(int j =1;j<=(2*n)-(2*i+1);j++){
            cout<<"*";
        }
        for(int j =1;j<=n-1;j++){
            cout<<" ";
        }

        for(i=1;i<=5;i++){
        for(int j =1;j<=i;j++){
            cout<<j;
            
        }        cout<<"\n";
    }
        cout<<"\n";
    }
    return 0;
}