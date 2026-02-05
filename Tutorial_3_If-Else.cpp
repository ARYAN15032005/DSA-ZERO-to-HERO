#include<iostream>
using namespace std;
//Here I will be using if else + function as I already learned function in  C so i wanna try to imply here

int grade(int marks){
    if(marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=80 and marks< 90){
        cout<<"Grade B"<<endl;
    }
    else if(marks>=70 and marks< 80){
        cout<<"Grade C"<<endl;
    }
    else if(marks>=60 and marks< 70){
        cout<<"Grade D"<<endl;
    }
    else if(marks>=50 and marks< 60){
        cout<<"Grade E"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}

int main(){
    int marks;
    cout<<"Enter your English marks:"<<endl;
    cin>>marks;
    grade(marks);
    cout<<"Enter your Maths marks:"<<endl;
    cin>>marks;
    grade(marks);
    cout<<"Enter your Chemistry marks:"<<endl;
    cin>>marks;
    grade(marks);
    cout<<"Enter your Physics marks:"<<endl;
    cin>>marks;
    grade(marks);   
    cout<<"Enter your Hindi marks:"<<endl;
    cin>>marks;
    grade(marks);
    cout<<"Enter your Biology marks:"<<endl;

    cin>>marks;
    grade(marks);
    return 0;
}