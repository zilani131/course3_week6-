#include<bits/stdc++.h>
using namespace std;


class Node{
public:
int value;
Node *Next;
Node(int val)
{

    value=val;
    Next=NULL;

}
};
void display(Node *head){
Node *temp=head;
while(temp!=NULL){

    cout<<temp->value;
    if(temp->Next!=NULL)cout<<" -> ";
    temp=temp->Next;
}
cout<<endl;
}
void insertAtTail(Node* &head,int val){
    Node* newNode;
    if(val%2==0){
    newNode =new Node(-1);
    }
    else{
     newNode=new Node(val);
    }
if(head==NULL){
    head=newNode;
    return;
}
Node *temp=head;
while(temp->Next!=NULL){
    temp=temp->Next;
}
temp->Next=newNode;

return;
}
int main(){

Node* head=NULL;
int t;
cin>>t;
while(t--){
        int val;
           cin>>val;
    insertAtTail(head,val);
}
display(head);
}
