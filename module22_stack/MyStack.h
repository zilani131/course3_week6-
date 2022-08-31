#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* Next;
    Node* Prev;
    Node(int val){
    value=val;
    }

};
class Stack{
Node*head;
Node*top;
int ctn=0;
public:
    Stack(){
    head=NULL;
    top=NULL;

    }
//////////////////push operation
void push(int val){
Node* newNode=new Node(val);
if(head==NULL){
    head=top=newNode;
    ctn++;
    return;
}
top->Next=newNode;
newNode->Prev=top;
top=newNode;
ctn++;
return;
}
//////////////////////////pop operation /////////////////////
int pop(){
int val;
Node*delNode;

if(head==NULL){
    return -1; ////the stack is underflow
}
delNode=top;
if(head==top){
    head=top=NULL;

}
else{
    top=delNode->Prev;
    top->Next=NULL;

}
val=delNode->value;
delete delNode;
  ctn--;
return val;
}
/////////////////////////status checking
bool empty(){
    if(head==NULL){
    return true;
    }
    return false;
}
//////////////////size///////////
int size(){
return ctn;}
////////////////////////////top/////
int Top(){
return top->value;}
};
