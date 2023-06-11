#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,m;cin>>n>>m;
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        string p="";
        for(int i=3;i<6;i++){
            p.push_back(s[i]);
        }
        int pp=stoi(p);
        v1.push_back(pp);
    }
    for(int j=0;j<m;j++){
        string s;cin>>s;
        int p=stoi(s);
        v2.push_back(p);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int a=v1[i];
        for(int j=0;j<m;j++){
            if(a==v2[j]){
                ans++;
                break;
            }
        }
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