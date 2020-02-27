#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[102],n,t,a;

    cin>>t;
    while(t--){
        for(int i=0; i<101;i++)
            ar[i]=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
        if(a>=1&&a<=100)
            ar[a]=1;
        }
        for(int i=1; i<=101; i++)
        {
            if(ar[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
