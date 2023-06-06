#include<bits/stdc++.h>
#define int long long
using namespace std;


/*


v[1]*v[2]+v[1]*v[3].....
+v[2]*v[3]+v[2]*v[4]...
+v[3]*v[4]+v[3]*v[5]...
+......
+v[n-1]*v[n]
v[1](v[2]+v[3]+.....+v[n])
+v[2]*(v[3]+v[4]+....+v[n])
+v[3]*()


*/
void myf(){
    
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mod=1e9+7;
    vector<int> suffix(n+1,0);
    for(int i=n-1;i>=0;i--){
        suffix[i]=(suffix[i+1]%mod+v[i]%mod)%mod;
    }
    
    int ans=0;
    for(int i=0;i<=n-2;i++){
        int suffixsum=suffix[i+1]%mod;
        int p=v[i]%mod;
        ans+=(suffixsum*p)%mod;
        // ans=(ans+(suffixsum*p)%mod)%mod;
    }
    cout<<ans%mod<<endl;
    
    
    

}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    
    while(t--){
        myf();
    }
    return 0;
}