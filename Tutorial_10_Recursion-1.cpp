// iteration using loops (for, while) to repeat code until a condition fails, 
// and recursion involving a function calling itself to break problems into smaller sub-problems

#include<iostream>
using namespace std;
#include<string>
int Print_Name(string n, int k){
    cout<<n<<"\n";
    if(k==1){
        return 0;
    }

    Print_Name(n,k-1);
    return 0;

    }
    


int main() {
    
    int k;
    string name;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"enter the value of k:";
    cin>>k;
    Print_Name(name,k);
    return 0;
}
