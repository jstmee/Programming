#include<bits/stdc++.h>
#define int long long
using namespace std;

bool sortByVal(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first == b.first) return a.second < b.second;
    
    return a.first > b.first;
}
void myf(){
    int n;cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    vector<pair<int,int>> tempans;
    for(auto it:mp){
        tempans.push_back({it.second,it.first});
    }
    sort(tempans.begin(),tempans.end(),sortByVal);
    for(auto it:tempans){
        for(int i=0;i<it.first;i++){
            cout<<it.second<<" ";
        }
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