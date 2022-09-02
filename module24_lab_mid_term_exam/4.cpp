#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n][k];
for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
        cin>>a[i][j];
    }
}
int m=a[0][0];
for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
       if(m<a[i][j]){
        m=a[i][j];
       }
    }
}
int fre[m+1];
memset(fre,0,(m+1)*sizeof(fre[0]));


for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){

        fre[a[i][j]]++;
        if(fre[a[i][j]]>1){
        a[i][j]=-1;
    }

    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
