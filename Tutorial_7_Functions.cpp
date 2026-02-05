#include<iostream>
using namespace std;
/*Functions are of two types 
    -> Call by ref : Instead of calling the values of variables a and b , we call their
    addresses by "&" , we can access their address with pointers (*ptr) and inside the function
    if we are changing the value inside these addresses ptr1(for a) and ptr 2(for b) then 
    the value of a and b will also change as we are changing the value of their address which is same as a and b.

    -> Call by value : Lets say you declare two variables a and b as 1 and 2
    but inside the function you change their value to 2 and 1 respectively means you changed 
    the value of a and b temporaily but outside the function their values are still
    as it is which is 1 and 2 respectively.

    */
//Password Encryption
void encrypt(string pass){
    pass="789"+pass+"123";
    cout<<"Encrypted password is:"<<pass<<endl;
}

int main() {
    string p;
    cout<<"Enter your password:"<<endl;
    cin>>p;
    
    cout<<"Original password is:\n"<<p<<endl; 
    encrypt(p);  
    return 0;
}