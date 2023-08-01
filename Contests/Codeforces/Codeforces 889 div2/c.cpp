#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            //-1 -2
            if(v[i+1]<=0){
                v[i+1]+=v[i];
                ans.push_back({i+1,i});
                i--;
            }
            //-5 -9
            else if(v[i+1]>0){
                v[i+1]+=v[i];
                ans.push_back({i+1,i});
                i--;
            }
            else if(v[i]<0 && v[i+1]<0){
                v[i]+=v[i+1];
                ans.push_back({i,i+1});
                i--;

            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first+1<<" "<<it.second+1<<endl;
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