#include<bits/stdc++.h>
#include"MyStack.h"
using namespace std;
int main()
{

    Stack st;
    st.push(3);
    st.push(4);

    st.push(5);
    while(!st.empty()){
                cout<<st.Top()<<endl;
     cout<<endl<<st.size();
       cout<<st.pop()<<endl;
    }
    // cout<<st.Top();
     cout<<endl<<st.size();
}
