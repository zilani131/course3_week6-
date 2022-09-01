#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {

        value=val;
        Next=NULL;
    }

};
void display(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->Next;
    }

}
//////////////////////////////////////////////insert at tail///////////////
void insertAtTail(Node* &head,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    temp->Next=newNode;
    return;

}
//////////////////////////////////////find the mid using slow and fast pointer////////////
int mid(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    if(head==NULL)
    {
        return -1;
    }

    while(fast!=NULL&&fast->Next!=NULL)
    {
        fast=fast->Next->Next;
        slow=slow->Next;
    }
    return slow->value;
}
//////////////////////////////////////make cycle///////////////
void makeCycle(Node*& head,int pos){
Node*temp=head;
int ctn=1;
Node*start;
while(temp->Next!=NULL){
    if(ctn==pos) start=temp;
    temp=temp->Next;
    ctn++;
}
temp->Next=start;
}
bool cycleStatus(Node *&head){
Node*slow=head;
Node*fast=head;
while(fast!=NULL&&fast->Next!=NULL){

    slow=slow->Next;
    fast=fast->Next->Next;
    if(slow->Next==fast->Next){
        return true;
    }
}
return false;
}
void removeCycle(Node* &head){
Node*fast=head;
Node*slow=head;
do{
    slow=slow->Next;
    fast=fast->Next->Next;
}
while(slow!=fast);
    fast=head;
while(slow->Next!=fast->Next){
    fast=fast->Next;
    slow=slow->Next;
}
  slow->Next=NULL;
}
int main()
{
    Node* head=NULL;

    cout<<"1.Insert at tail"<<endl<<"2.find the mid using slow first pointer"<<endl<<"3.make a cycle in the list "<<endl<<"4.cycle status"<<endl<<"5.Remove Cycle"<<endl;
    int choice=100;
               while(choice!=0)
    {
        cout<<"Enter the choice " ;
        cin>>choice;
        int val,pos,m;
        switch(choice)
        {
        case 1:
            cout<<"Enter the value ";
            cin>>val;
            insertAtTail(head,val);
            break;
        case 2:
            m=mid(head);
            cout<<m;
            break;
        case 3:
            cout<<"Insert the position ";
            cin>>pos;
            makeCycle(head,pos);
            break;
        case 4:
            bool t;
            t=cycleStatus(head);
           // cout<<t;
            if(t){
                cout<<"There is cycle "<<endl;
            }
            else{
                cout<<"There is no cycle"<<endl;
            }
            break;
        case 5:
            if(cycleStatus(head)){
                 removeCycle(head);
            }
            else{
                cout<<"There is no cycle to remove ";
            }

            break;
        }


    }
    cout<<endl;
    display(head);
    int val=mid(head);
    cout<<endl<<val;
}
