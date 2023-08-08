#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    for(int i=0;i<n;i++){
        if((v[i]%2==0) && ((sum-v[i])%2==0)  || (v[i]%2!=0) && ((sum-v[i])%2!=0)){
            cout<<"YES"<<endl;return;

        }
    }
    cout<<"NO"<<endl;return;




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