#include<bits/stdc++.h>
#define int long long
using namespace std;

//m+x*p<=n
void myf(){
    int n,m,p;cin>>n>>m>>p;
    int ans=0;
    for(int i=0;i<=n;i++){

        if(m+i*p<=n){
            ans++;
        }
    }
    cout<<ans<<endl;return;



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