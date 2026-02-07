#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    
    int rev=0;    int last_no;
    while(n!=0){
        last_no=n%10;
        rev=rev*10+last_no;
        n=n/10;
    }
    cout<<"The reversed number is "<<rev<<endl;
    if(rev==n){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl; 
    }
}