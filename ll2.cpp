#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void printlist(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

class solution{
    public:
    Node* header(vector<int> arr){
        Node* head=new Node(arr[0]);
        Node* mover=head;
        for(int i=1;i<arr.size();i++){
            Node* temp= new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
    
    void print(Node* head){
        while(head!=nullptr){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    Node* deletefromhead(Node* head){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* deletefromtail(Node* head){
        
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        return head;
    }
    Node* insertathead(Node* head, int val){
        Node* temp= new Node(val);
        temp->next=head;
        return temp;
    }
    Node* InsertatK(Node* head, int element, int k){
        if(head==NULL){
            return new Node(element);
        }
        Node* temp=head;
        if(k==1){
            return new Node(element, head);
        }
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt==k-1){
                Node* x= new Node(element, temp->next);
                temp->next=x;
                break;

            }
            return head;
        }
    }
};
int main(){
    vector<int> arr={1,3,5,7,9};
    solution sol;
    Node*head=sol.header(arr);
    printlist(head);
    cout<<endl;
    // head=sol.deletefromtail(head);
    // printlist(head);
    head=sol.insertathead(head,11);
    printlist(head);

}