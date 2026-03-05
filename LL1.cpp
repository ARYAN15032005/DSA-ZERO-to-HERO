#include<bits/stdc++.h>
using namespace std;
// step 1 is to create a parameter like int, char because
// Linkedin list stores two types of data, one is numeric value and
// other is the pointer to its next node
class Node{
    // creation of struct data type
    public:
    int data;
    Node* next;
    // Initialisation
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
     public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

Node* convertARR2Llist(vector<int> arr){
Node* head=new Node(arr[0]);
Node* mover=head;
for(int i=1;i<arr.size();i++){
    Node* temp= new Node(arr[i]);
    mover->next=temp;
    mover=temp;
}
return head;

}

int countLL(vector<int> arr){
    int cnt=0;
    Node* head=convertARR2Llist(arr);
    Node* temp=head;
    while(temp!=nullptr){
        
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

bool checkifpresent(vector<int> arr, int val){
    Node* head=convertARR2Llist(arr);
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    vector <int> arr={1,2,3,4,5};
    // node* y means store the adress in y, new means find an epmty space in the heap
    // memory , arr[0] is the data1 part which we initialed at start, null is the empty pointer

    Node* head=convertARR2Llist(arr);
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<countLL(arr)<<endl;
    cout<<checkifpresent(arr,9);
    return 0;
}