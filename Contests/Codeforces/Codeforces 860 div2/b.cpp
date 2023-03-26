#include<bits/stdc++.h>
#define int long long unsigned
using namespace std;


void myf(){

    int m;cin>>m;
    unordered_map<int,int> mp;
    int k=1;
    int mm=m;
    while(m--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=k;
        }
        k++;
    }
    vector<pair<int,int>> temp;
    for(auto p:mp){
        temp.push_back({p.second,p.first});
    }
    sort(temp.begin(),temp.end());
    
    // if((temp[0].first==temp[temp.size()-1].first)){
    //     cout<<-1<<endl;
    //     return;
    // }
    // else{
        
        map<int,int> mpp;
        for(int i=0;i<temp.size();i++){
            mpp[temp[i].first]=temp[i].second;
        }
        if(mpp.size()<mm){
            cout<<-1<<endl;
            return;
        }
        for(auto zz:mpp){
            cout<<zz.second<<" ";
        }
        cout<<endl;



    // }


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