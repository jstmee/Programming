#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> PosNegPair(int arr[], int n) {
        vector<int> ans={};
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(-(arr[i]))!=mp.end() && mp.find(arr[i])!=mp.end()){
                if(arr[i]<0){
                    ans.push_back(arr[i]);
                    ans.push_back(-arr[i]);
                }
                else{
                    ans.push_back(-arr[i]);
                    ans.push_back(arr[i]);
                }
                mp[arr[i]]--;
                mp[-arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                if(mp[-arr[i]]==0){
                    mp.erase(-arr[i]);
                }
            }
        }
        return ans;
    }
void myf(){
    int n=9;
    int arr[]={12 ,7 ,-2 ,-11 ,12 ,-12 ,-8 ,3 ,3};
    auto it=PosNegPair(arr,n);
    for(auto itt:it){
        cout<<itt<<" ";
    }
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