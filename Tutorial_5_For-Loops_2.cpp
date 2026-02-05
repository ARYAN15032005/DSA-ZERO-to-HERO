#include<iostream>
using namespace std;
int main() {
    int arr[6]={15,15,20,15,30,30};
    int i,j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            
            if(arr[i]==arr[j]){
                cout<<"Duplicate element :"<<arr[i]<<endl;
            }

    }    
}
    return 0;
}