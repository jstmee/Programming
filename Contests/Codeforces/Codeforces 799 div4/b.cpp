#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    map<int,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    // cout<<"pp"<<endl;
    // int ans=0;
    // for(auto p:mp){
    //     ans+=p.second%2;

    // }
    // cout<<ans<<endl;

    int p=mp.size();
    if((n-p)%2==0){
        cout<<p<<endl;return;
    }
    else{
        cout<<p-1<<endl;return;
    }




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