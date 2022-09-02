#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
int c[n];
int k=0;
memset(c,-1,(n)*sizeof(c[0]));
int pos=0;
for(int i=0;i<n;i++){

for(int j=0;j<m;j++){
    if(a[i]==b[j]){
c[k]=pos;
k++;
    }

}
pos++;
}


int kt=0;

for(int i=0;i<n;i++){

    if(i!=c[kt]){
         cout<<a[i]<<" ";
    }
   else{kt++;}
}

}
