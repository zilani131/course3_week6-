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
Node * rotate(Node *&head,int pos){
Node*start;
Node*temp=head;
Node* rot=head;
int ctn=1;
while(ctn<pos){
    temp=temp->Next;
    ctn++;
}

start =temp->Next;
Node *secondTemp=start;
temp->Next=NULL;
while(secondTemp->Next!=NULL){
    secondTemp=secondTemp->Next;

}
secondTemp->Next=rot;

return start;
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
int pos;
cin>>pos;
display(head);

cout<<endl;
Node*ro=rotate(head,pos);
display(ro);
}
