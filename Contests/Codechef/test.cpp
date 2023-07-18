#include<bits/stdc++.h>
#define int long long
using namespace std;

int maxDistance(int arr[], int n){
        map<int,pair<int,int>> mp;
        for(int i=0;i<n;i++){
            int temp=arr[i];
            if(mp.find(temp)==mp.end()){
                mp[temp]={i,-1};
            }
            else{
                mp[temp].second=i;
            }
        }
        int ans=0;
        for(auto it:mp){
            if(it.second.second!=-1){
                max(ans,it.second.second-it.second.first);
            }
        }
        return ans;
    }
void myf(){

    int p[]={1,1,2,2,2,1};
    int n=6;
    cout<<maxDistance(p,n)<<endl;
    


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