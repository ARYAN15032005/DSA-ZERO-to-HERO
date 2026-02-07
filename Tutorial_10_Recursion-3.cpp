// iteration using loops (for, while) to repeat code until a condition fails, 
// and recursion involving a function calling itself to break problems into smaller sub-problems

#include<iostream>
using namespace std;
#include<string>
int Print_Name(int k){
    if(k==1){
        return 1;
    }
   return k+Print_Name(k-1);
   }
int main() {
    
    int curr;
    cout<<"enter Current No.";
    

cin>>curr;
    cout<<Print_Name(curr);
    return 0;
}
