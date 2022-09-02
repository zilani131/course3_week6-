#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>a[i][j];
    }
    }
    int sum=0;
   for(int j=0;j<(n/2);j++){
    sum+=a[0][j];
    }
     for(int j=0;j<n;j++){
    if (j==n/2) continue;
    sum+=a[n/2][j];
    }
     for(int j=(n/2)+1;j<n;j++){
    sum+=a[n-1][j];
    }
    for(int i=0;i<n;i++){
    sum+=a[i][n/2];
    }
    for(int i=0;i<n/2;i++){
    sum+=a[i][n-1];
    }
    for(int i=(n/2)+1;i<n;i++){
    sum+=a[i][0];
    }
    cout<<sum;
}

