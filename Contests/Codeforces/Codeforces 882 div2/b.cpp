#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int temp=v[0];
    for(int i=1;i<n;i++){
        temp=temp&v[i];
    }
    if(temp!=0){
        cout<<1<<endl;
        return;
    }
    int temp2=v[0];
    int ans=0;
    for(int i=1;i<n;i++){
        if(temp2==0){
            ans++;
            temp2=v[i];
        }
        else{
            temp2=temp2&v[i];
        }
    }
    if(temp2==0){
        cout<<ans+1<<endl;return;
    }
    else{
        cout<<ans<<endl;
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