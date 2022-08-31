#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int  value;
    Node *Next;
    Node(int  val){
    value=val;
    Next=NULL;

    }

};
void display(Node*& head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->Next;
}

}
void add(Node*&head,int  val){
    Node *newNode=new Node(val);
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
void dltDuplicate(Node*&head){
Node *temp=head;
while(temp->Next!=NULL){
    if(temp->value==temp->Next->value){
        Node*dltNode=temp->Next;
        temp->Next=dltNode->Next;
        cout<<"us"<<" ";
        delete dltNode;

        dltDuplicate(temp);
    }
         if(temp->Next==NULL)break;
        temp=temp->Next;


    cout<<"Out ";
}
temp->Next=NULL;
cout<<"last ";
return;
}
int main(){
    Node *head=NULL;
int t;
cin>>t;
int a;
while(t--){
    cin>>a;
    add(head,a);

}
display(head);
dltDuplicate(head);
display(head);

}
