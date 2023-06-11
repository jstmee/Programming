#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,x;cin>>n>>x;
    for(int i=1;i<=n;i++){
        int p;cin>>p;
        if(x==p){
            cout<<i<<endl;return;
        }
    }


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    // cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}