#include<bits/stdc++.h>
#define int long long
using namespace std;
/*
https://leetcode.com/problems/set-mismatch/?envType=list&envId=rvw74t0j


*/

vector<int> findErrorNums(vector<int>& nums) {

        map<int,int> mp;
        int n=nums.size();
        for(auto it:nums){
            mp[it]++;
        }
        
        int a,b;
        for(int i=1;i<=n;i++){
            if(mp.find(i)!=mp.end()){
                if(mp[i]==2){
                    a=i;

                }

            }
            else{
                b=i;
            }
        }

        return {a,b};
        
    }

void myf(){


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