#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> ans(n),v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    ans[0]=v[0];
    ans[n-1]=v[n-2];
    for(int i=1;i<n-1;i++){
        ans[i]=min(v[i-1],v[i]);

    }
    for(auto p:ans){
        cout<<p<<" ";
    }
    cout<<endl;



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