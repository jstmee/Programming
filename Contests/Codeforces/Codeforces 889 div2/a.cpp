#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==i+1){
            ans++;
        }
    }
    if(ans%2==0){
        cout<<ans/2<<endl;return;
    }
    cout<<ans/2+1<<endl;


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