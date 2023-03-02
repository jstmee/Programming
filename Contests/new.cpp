#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    bool check=false;
    int mini=INT32_MAX;
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
        if(v[i].first==1){
            check=true;
        }
        mini=min(mini,v[i].first);
        maxi=max(maxi,v[i].first);
    }

    if(check){
        if(mini==maxi){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
    int ans=0;
    sort(v.begin(),v.end());
    vector<pair<int,int>> ij;
    while(v[0].first!=v[n-1].first){
        if(v[n-1].first!=2){
            v[n-1].first=ceil((double)v[n-1].first/v[0].first);
            ans++;
            ij.push_back({v[n-1].second,v[0].second});
            sort(v.begin(),v.end());
        }
        else {
            continue;
        }
    }
    cout<<ans<<endl;
    for(auto p:ij){
        cout<<p.first<<" "<<p.second<<endl;
    }



}
int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        myf();
    }
    return 0;
}