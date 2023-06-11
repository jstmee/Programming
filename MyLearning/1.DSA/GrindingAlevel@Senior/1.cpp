#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,a,b;cin>>n>>a>>b;
    int sum=a+b;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(sum==v[i]){
            cout<<i+1<<endl;return;
        }
    }


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