#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n=nums.size();
        
        int i=0,j=0;
        vector<int> v,ans,counter(50,0);
        
        while(j<n){
            
            // v.push_back(nums[j]);
            if(nums[j]<0){
                counter[nums[j]+50]++;
            }
            
            
            
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                //1 0 3 0 1
                //x=2

                
                int count=0;
                bool check=false;
                for(int p=0;p<50;p++){
                    count+=counter[p];
                    if(count>=x){
                        ans.push_back(p-50);
                        check=true;
                        break;

                    }
                }
                if(!check){
                    ans.push_back(0);
                }
                if(counter[nums[i]]!=0){
                    counter[nums[i]+50]--;
                }
                i++;
                j++;
                
                
                
                
                
            }
            
        }
        return ans;
        
    }

void myf(){

    vector<int> pp={-3,1,2,-3,0,-3};
    vector<int> q=getSubarrayBeauty(pp,2,1);
    for(auto a:q){
        cout<<a<<" ";
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
