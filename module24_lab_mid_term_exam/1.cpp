#include<bits/stdc++.h>
using namespace std;
void freq(int a[],int s){
int m=*max_element(a,a+s);
int ctn[m+1];
memset(ctn,0,(m+1)*sizeof(ctn[0]));
for(int i=0;i<s;i++){
    ctn[a[i]]++;
}
for(int val=0;val<=m;val++){
    if(ctn[val]>0){
        cout<<val<<" => "<<ctn[val]<<endl;
    }
}
}
int main(){
int n;
cin>>n;
int b[n];
for(int i=0;i<n;i++){
    cin>>b[i];
}
freq(b,n);
}
