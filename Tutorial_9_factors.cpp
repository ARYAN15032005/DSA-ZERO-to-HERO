#include<iostream>
using namespace std;
int main() {
    int n, count=0;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    
    
    cout<<"Number of digits in the number is : "<<count<<endl;
    cout<<n<<endl;
    
    


    
    return 0;
}
