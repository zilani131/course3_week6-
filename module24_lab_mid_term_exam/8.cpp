#include<bits/stdc++.h>
using namespace std;

/////////////////////double link class////////
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
////////////////////to display the linked list////////////////////
void display(Node *head){
Node *temp=head;
while(temp!=NULL){

    cout<<temp->value;
    if(temp->Next!=NULL)cout<<" -> ";
    temp=temp->Next;
}
cout<<endl;
}
///////////////////////////////////size/////////////
int lengthList(Node *head)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return -1;
    }
    int k=1;
    while(temp->Next!=NULL)
    {

        //cout<<temp->value<<" ";
        temp=temp->Next;
        k++;
    }
    return k;
}
void insertAtTail(Node* &head,int val){
    Node* newNode;


     newNode=new Node(val);


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
void dltAtHead(Node *&head){
if(head==NULL){
    cout<<"Nothing to dlt";
}
else if(lengthList(head)==1){
    head=NULL;
    cout<<"The head is now empty"<<endl;
    return;
}
else {
   Node *temp=head;
   head=temp->Next;

   delete temp;
}
}
void dltAtTail(Node* &head){

if(head==NULL){
    cout<<"Nothing to dlt";
}
else if(lengthList(head)==1){
    head=NULL;
    cout<<"The head is now empty"<<endl;
    return;
}
else {
   Node *temp=head;
   while(temp->Next->Next!=NULL)
   {
       temp=temp->Next;
   }
  delete temp->Next->Next;
  temp->Next=NULL;
}
}
void dltAtPos(Node* &head,int pos){
  int s=lengthList(head);

    if(pos<=0|| pos>s)
    {
        cout<<"The position is not valid";
        return;
    }

////////////////////position at head////////////////
    if(pos==1)
    {
        dltAtHead(head);
        return;
    }
    if(pos==s)
    {
        dltAtTail(head);
        return;
    }
    //cout<<pos<<endl;
    int k=1;


    Node *temp1=head;
    Node *temp2;
    while(k<pos-1)
    {
//cout<<pos<<endl;
        temp1=temp1->Next;
        k++;
    }
    cout<<k;
temp2=temp1->Next->Next;
delete temp1->Next;
temp1->Next=temp2;


}
void fu(Node*& head,int s,int e){
int l=lengthList(head);
Node*temp=head;
for(int i=0;i<l;i++){
    for(int j=0;j<m;j++){
        temp=temp->Next;
    }

}


}
int main(){

Node* head=NULL;
int t,s,f;
cin>>t>>s>>f;
while(t--){
        int val;
           cin>>val;
    insertAtTail(head,val);
}
int ctn[t];
for(int i=0;i<t;i++){
    ctn[i]=s+1;
    s++;
}
/*for(int i=0;i<f;i++){
   cout<<ctn[i];
}*/
for(int i=0;i<f;i++){
    dltAtPos(head,ctn[i]);
}

cout<<endl;
display(head);
}

