#include<bits/stdc++.h>
#define int long long
using namespace std;


//question link https://www.learning.algozenith.com/problems/LR-Sum-Query-20
void myf(){
    int n,q;
    cin>>n>>q;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector <int> prefix(n+1);
    prefix[0]=v[0];
    for(int i=1;i<=n;i++){
        prefix[i]=((((prefix[i-1]+v[i-1])%1000000007)+1000000007)%1000000007);
        
        // if(prefix[i]<0){
        //     prefix[i]+=1000000007;
        // }
        // if(prefix[i]>1000000007){
        //     prefix[i]-=1000000007;
        // }
    }


    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=(((prefix[r]-prefix[l-1])%1000000007+1000000007)%1000000007);
        
        cout<<ans<<endl;
    }


}

int32_t main(){

    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // int t;cin>>t;
    int t=1;
    while(t--){
        myf();
    }

    return 0;
}