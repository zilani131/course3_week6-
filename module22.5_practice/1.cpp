#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    char value;
    Node *Next;
    Node(char val){
    value=val;
    Next=NULL;

    }

};
void add(Node*&head,char val){
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
}
Node *reverseList(Node*& head){
Node*Pre=NULL;
Node*Curr=head;
Node*Nxt;
while(Curr!=NULL){
    Nxt=Curr->Next;
    Curr->Next=Pre;
    Pre=Curr;
    Curr=Nxt;

}
return Pre;
}
void display(Node*& head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->Next;
}

}
bool palindrome(Node*&head,Node*&newhead){
Node *temp1=head;
Node *temp2=newhead;
while(temp1!=NULL&&temp2!=NULL){
    if(temp1->value!=temp2->value){
           // cout<<"False";
        return false;
    }
    temp1=temp1->Next;
    temp2=temp2->Next;
}
return true;

}
int main(){
    Node *head=NULL;
int t;
cin>>t;
char a;
while(t--){
    cin>>a;
    add(head,a);

}
//display(head);
cout<<endl;
Node*newhead=reverseList(head);
//display(newhead);
bool ans=palindrome(head,newhead);
if(ans){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
}
