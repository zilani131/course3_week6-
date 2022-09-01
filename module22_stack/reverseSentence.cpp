#include<bits/stdc++.h>
#include"MyStack.h"
using namespace std;
void reverseSentence(string chk){
Stack <string> st;
for(int i=0;i<chk.length();i++){
    string word="";
    while(i<chk.length()&&chk[i]!=' '){
        word+=chk[i];
        i++;

    }
    cout<<word<< " ";
    st.push(word);
}
cout<<endl;
while(!st.empty()){
    cout<<st.pop()<<" ";
}

}
int main(){
string a="zilani is a good boy";
reverseSentence(a);
}
