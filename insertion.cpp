#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data= data1;
        next=next1;
    }
    public:
    Node(int data1){
        data =data1;
        next=nullptr;
    }
};

class Solution{
    public:
Node* insertathead(Node* head, int val){
    Node* newNode= new Node(val,head);
    return newNode;
}

void printlist(Node* head){
    Node* temp= head;
    
    cout<<"List is:"<<temp->data<<" ";
    while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<< endl;
}
};

int main(){
    Solution sol;
    Node *head= new Node(10);
    head->next=new Node(20);
    sol.printlist(head);
    head=sol.insertathead(head, 5);
    sol.printlist(head);
    sol.printlist(head);

    return 0;
}