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
    cout<<temp->value;
   if(temp->Next!=NULL) cout<<"->";
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
///////////////////////////sum///////////
Node* dltConsecutive(Node* &head){
Node*temp=head;
Node*temp2;
Node*desired=NULL;
while(temp!=NULL){
        Node* start=temp;
        if(temp->Next!=NULL){
             temp2=temp->Next;
        }
        else{
            temp2=temp;
        }

int sum=temp->value;
while(temp2!=NULL){
        if(temp->Next!=NULL){
            sum=sum+temp2->value;
        }
        else{
            sum=temp2->value;
        }
    if(sum==0){
          //  cout<<"Sum zero "<<temp->value<<endl;
        temp=temp2->Next;
        start=NULL;
        break;
    }
    else{
       temp2=temp2->Next;
       if(temp2==NULL){
        temp=temp->Next;
      /*  if(temp==NULL){
            cout<<"NULL"<<endl;
        }*/
       // cout<<"temp value "<<temp->value<<endl;
       }
    }


}

if(start!=NULL){
//cout<<"This is the "<<start->value<<endl;
add(desired,start->value);
}
//if(temp==NULL)break;

}
return desired;
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

Node* newNode=dltConsecutive(head);

display(newNode);
}
