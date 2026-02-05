#include<iostream>
#include<string>
using namespace std;

/*
Arrays is a collection of homogenos data types where datas are inserted from index 0.
Arr=["Aryan",12,TRUE] -> Invalid as data types are different
Syntax = data_type array_name[size];
When you define the size of the array, all of that space in memory is “reserved”
To find an element in array:
    1) By index if array is small and visible
    2) If we dont know where the element is then use linear/binary search
    3) For faster approach, hash set /hash map

STRINGS
Strings are like a series of characters stored in a specific order. 
Each character in a string is assigned an index, starting from 0.

*/  
int main() {
    int arr[20], i;
    for(i=0;i<20;i++){
        arr[i]=i+1;
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<arr[12]<<endl;
    int count= sizeof(arr)/sizeof(arr[3]);

    cout<<"\nsize of array is:"<<count<<endl;

    string a;
    cout<<"Enter your name:"<<endl;
    cin>>a;
    cout<<"Your name is:"<<a<<endl;
    cout<<a.length()<<endl;
    char temp;
    for(i=0;i<a.length()/2;i++){
     temp=a[i];
     a[i]=a[a.length()-1-i];
     a[a.length()-1-i]=temp;

    }
    cout<<"Reversed name is:"<<a<<endl;
    

    return 0;
}