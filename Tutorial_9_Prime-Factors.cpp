#include<iostream>
using namespace std;
int main() {
    int n, count=0;
    cout<<"Enter a number :";
    int temp=n;
    int num =n;
    cin>>num;
    for(int i=1; i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
            count++;
            
        }
        
        
        
    }
    
    
    if(num>0){
    
    cout<<"Number of digits in the number is : "<<count<<endl;
    if(num==1){
        cout<<"Its neither composite nor prime";
    }
    
    else if(count==2){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is a composite number";
    }
}
    
    
    


    
    return 0;
}
