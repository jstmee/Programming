#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m;cin>>n>>m;
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;cin>>c;
            if(c=='#'){
                ans++;
            }
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