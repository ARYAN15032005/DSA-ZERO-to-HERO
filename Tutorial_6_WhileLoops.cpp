#include<iostream>
using namespace std;
int main() {
    //I will be printing a factorial w user input using while loop
    int n,fact=1;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(n>0){
        fact=fact*n;
        n--;
    }
    cout<<"Factorial is:"<<fact<<endl;
    return 0;
}