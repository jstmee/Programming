#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;cin>>n>>k;
    // cout<<n<<k<<endl;
    vector<int> v(n);
    int mod=1e9+7;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int tt=max((sum+v[i])%mod,v[i]%mod);
        sum=tt;
        ans=max(ans%mod,sum%mod);
    }
    // cout<<ans<<endl;
    // int p=1;
    int pp=ans;
    int nans=0;
    for(int i=0;i<k;i++){
        // nans+=(pp);
        nans=(nans+pp)%mod;
        pp=(pp+nans)%mod;
    }
    // cout<<nans<<endl;
    int tsum=0;
    for(auto it:v){
        // tsum+=it;
        tsum=(tsum+it)%mod;
    }
    
    cout<<((nans%mod+tsum%mod)%mod+mod)%mod<<endl;






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