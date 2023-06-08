#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,k;cin>>n>>k;
    double temp=n;
    int p=floor(log2(temp));
    if(k>32){
        cout<<n+1<<endl;return;
    }
    int a=pow(2,k);
    cout<<min(a,n+1)<<endl;
    


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