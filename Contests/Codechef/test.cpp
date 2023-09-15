#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> ans(n);
    ans[0].push_back(v[0]);
    for(int i=1;i<n;i++){

        for(auto it:ans[i-1]){
            int ai=it;
            int temp1=v[i]+ai;
            int temp2=-v[i]+ai;
            // if(temp1>=0){
            //     ans[i].push_back(temp1);
            // }
            // if(temp2>=0){
            //     ans[i].push_back(temp2);
            // }
            if(temp1==temp2){
                ans[i].push_back(temp1);
                continue;
            }
            if(temp1>=0){
                ans[i].push_back(temp1);
            }
            if(temp2>=0){
                ans[i].push_back(temp2);
            }

        }
        if(ans[i].size()>=2){
            cout<<-1<<endl;return;
        }
    }
   
    for(auto it:ans){
        cout<<it[0]<<" ";
        
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