#include<bits/stdc++.h>
#include"MyStack.h"
using namespace std;
//id set by authority so that it can not be messy
int globalId=100;
class person{
string name;
int id;
float salary;
public:
    //creating an empty constructor so that to avoid garbage value while using stack and when head pointer is null
    person(){
    this->name="";
    this->id=-1;
    this->salary=-1.0;
    }
void set_name(string name){
this->name=name;
}

void set_salary(float salary){
    this->salary=salary;
}
person(string name,float salary){
set_name(name);
set_salary(salary);
this->id=globalId;
globalId++;
}
string get_name(){
return this->name;
}
int get_id(){
return this->id;
}
float get_salary(){
return this->salary;}
void printOut(){
cout<<get_name()<<" | "<<get_salary()<<" | "<<get_id()<<endl;

}
};
int main(){
Stack <person> st;
person a("zilani",700.9);
person b("mehedi",700.9);
person c("mumnun",700.9);
st.push(a);
st.push(b);
st.push(c);
cout<<"Top obj"<<endl;
  person printTop;
    printTop =st.Top();
    printTop.printOut();
    cout<<"size"<<endl;
    cout<<st.size()<<endl;
while(!st.empty()){
    person printObj;
    printObj =st.pop();
    printObj.printOut();
}



}
