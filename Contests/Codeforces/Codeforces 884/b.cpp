#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    v[0]=2;
    v[n-1]=3;
    v[n/2]=1;
    int c=4;
    for(int i=0;i<n;i++){
        if(i==0){
            // cout<<2<<" ";
            continue;
        }
        if(i==n/2){
            // cout<<1<<" ";
            continue;
        }
        if(i==n-1){
            // cout<<3<<" ";
            continue;
        }
        v[i]=c;
        c++;

    }

    for(auto it:v){
        cout<<it<<" ";
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