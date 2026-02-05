#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    //Primitive Data types in C++
    int a =12;
    float b =12.5;
    double c = 34.56789;
    char d ='A';
    bool e = true;

    //Derived Data types in C++
    int arr[5] = {1,2,3,4,5};
    int *ptr = &a;
    
    //User-defined Data types in C++
    struct Person{
        string name;
        int age;
    };
    class acc{
        public:
        int acc_no;
        string acc_name;
    };
    enum Color { RED, GREEN, BLUE };
    
    
    
}