#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int gcd;
    for(int i=1; i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of"<<a<<" and " <<b<<" is "<<gcd<<endl;
    int LCM = (a*b)/gcd;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<LCM<<endl;
    
    return 0;    
}
