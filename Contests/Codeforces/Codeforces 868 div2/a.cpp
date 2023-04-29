#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;cin>>n>>k;
    for(int x=0;x<=n;x++){
        int ones=x;
        int negone=n-x;
        int temp1=x*(x-1);
        int temp2=(n-x)*(n-x-1);
        temp1=temp1/2;
        temp2=temp2/2;
        if(temp1+temp2==k){
            cout<<"YES"<<endl;
            for(int i=0;i<x;i++){
                cout<<1<<" ";
            }
            for(int i=0;i<(n-x);i++){
                cout<<-1<<" ";
            }
            cout<<endl;
            return;

        }
    }

    cout<<"NO"<<endl;return;


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}