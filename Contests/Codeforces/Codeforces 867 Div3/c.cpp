#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;

    int ans=26;
    if(n==4){
        cout<<ans<<endl;
        return;
    }
    n--;
    cout<<n*n+4*n+5<<endl;return;


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