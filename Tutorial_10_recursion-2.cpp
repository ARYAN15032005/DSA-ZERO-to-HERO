// iteration using loops (for, while) to repeat code until a condition fails, 
// and recursion involving a function calling itself to break problems into smaller sub-problems

#include<iostream>
using namespace std;
#include<string>
int Print_Name(int n,int k){
    cout<<n<<"\n";
    if(n>=k){
        return 0;
    }
    

    Print_Name(n+1,k);
    return 0;

    }
    


int main() {
    
    int N;
    cout<<"enter the value of k:";
    cin>>N;
    Print_Name(1,N);
    return 0;
}
