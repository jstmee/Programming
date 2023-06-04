#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;cin>>n>>k;

    vector<int> v(n+1,0);
    v[1]=v[n]=1;
    int temp=k+1;

    for(int i=1;i<=n;i++){
        if(i==temp){
            v[i]=1;
            temp+=k;
        }
        
        
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]==1){
            ans++;
        }
    }
    cout<<ans<<endl;
    

    



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