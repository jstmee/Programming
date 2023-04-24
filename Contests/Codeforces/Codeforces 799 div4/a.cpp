#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    vector<int> v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    int check=v[0];
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=3;i>=0;i--){
        if(v[i]!=check){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;return;
    


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