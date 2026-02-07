// iteration using loops (for, while) to repeat code until a condition fails, 
// and recursion involving a function calling itself to break problems into smaller sub-problems

#include<iostream>
using namespace std;
#include<string>
int Fibb(int n){
if(n<=1){
    return n;
}
    return Fibb(n-1)+Fibb(n-2);
}
int main() {
    
    int curr;
    cout<<"Enter N:";
    

cin>>curr;

for (int i =0; i<=curr;i++){
    cout<<Fibb(i)<<" ";
}
    return 0;
}
