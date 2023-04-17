#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> findPrefixScore(vector<int>& nums) {
        
        int maxi=0;
        vector<int> conver(nums.size());
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            
            conver[i]=nums[i]+maxi;
            
            
            
        }
        
        vector<int> ans(nums.size(),0);
        ans[0]=conver[0];
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]+conver[i];
        }
        
        return ans;
        
    }

void myf(){

    vector<int> grid={ 1,1,2,4,8,16   };

    vector<int> ans=findPrefixScore(grid);
    for(auto p: ans){
        cout<<p<<" ";
    }
    cout<<endl;
    
    
}
int32_t main() {
	// your code goes here
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
