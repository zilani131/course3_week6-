#include<bits/stdc++.h>
#include"MyStack.h"
using namespace std;
int main()
{

    Stack<char> st;
    st.push('a');
    st.push('b');

    st.push('c');
    while(!st.empty()){
                cout<<st.Top()<<endl;
     cout<<st.size()<<endl;
       cout<<st.pop()<<endl;
    }
    // cout<<st.Top();
     cout<<endl<<st.size();
     cout<<endl;

      Stack <pair<int,char> > pt;
    pt.push(make_pair(1,'a'));
   pt.push(make_pair(2,'b'));
   pt.push(make_pair(3,'c'));
    pair <int ,char> chk;
            pair <int ,char> po;
            chk=pt.Top();
    while(!pt.empty()){


    po=pt.pop();
      cout<<chk.first<<" "<<chk.second<<endl;
     cout<<pt.size()<<endl;
       cout<<po.first<<" | "<<po.second<<endl;
    }
    // cout<<st.Top();
     cout<<endl<<pt.size();
}
