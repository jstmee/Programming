#include<bits/stdc++.h>
#define int long long
using namespace std;
/*

https://atcoder.jp/contests/abc297/tasks/abc297_a

*/

void myf(){
    int n,d;cin>>n>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=-1;
    int temp=v[0];
    for(int i=1;i<n;i++){
        int p=v[i];
        if(p-temp<=d){
            cout<<v[i]<<endl;return;
        }
        temp=v[i];

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