#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int e[d];
        for(int i=0;i<d;i++){
            cin>>e[i];
        }
        int s[d];
        for(int i=0;i<d;i++){
            cin>>s[i];
        }
        int q;
        cin>>q;
        int z=q;
         int out[z];
                 int k=0;
        while(q--){
            int f;
            cin>>f;
            int earn=0;
            int spent=0;
            for(int i=0;i<=f;i++){
                   // cout<<e[i]<<" "<<s[i]<<endl;
                earn=earn+e[i];
                spent=spent+s[i];
            }
            //cout<<earn<<" "<<spent<<endl;


            if(earn-spent>=0){
                out[k]=1;
                k++;
            }
            else{
                out[k]=0;
                k++;
            }

        }
        for(int i=0;i<z;i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
    }

}
