#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;
    Node(int val){

    value=val;
    Next=NULL;
    }

};
void display(Node *head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->Next;
}

}
void insertAtTail(Node* &head,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;
    return;

}
int mid(Node* head){
Node* fast=head;
Node* slow=head;
if(head==NULL){
    return -1;
}

while(fast!=NULL&&fast->Next!=NULL){
    fast=fast->Next->Next;
    slow=slow->Next;
}
return slow->value;
}
int main(){
    Node* head=NULL;
int n;
cin>>n;
int k;
while(n--){
    cout<<"Enter the value ";
        cin>>k;
    insertAtTail(head,k);
}
cout<<endl;
display(head);
int val=mid(head);
cout<<endl<<val;
}
