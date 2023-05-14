#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<pair<int,string>> v(n);
    int ans=INT_MAX;
    int ans1=INT_MAX,ans2=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
        if(v[i].second=="11"){
            ans=min(ans,v[i].first);
            

        }
        else if(v[i].second=="10"){
            ans1=min(ans1,v[i].first);
        }
        else if(v[i].second=="01"){
            ans2=min(ans2,v[i].first);

        }
    }

    int exactans=ans1+ans2;
    if(min(ans,exactans)!=INT_MAX){
        cout<<min(ans,exactans)<<endl;return;
    }
    else cout<<-1<<endl;




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