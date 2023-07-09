#include<bits/stdc++.h>
#define int long long
using namespace std;


int alternatingSubarray(vector<int>& nums) {
        
        int ans=-1;
        int n=nums.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                v[i]=1;
            }
            else{
                v[i]=-1;
            }
        }
        for(int i=0;i<n;i++){
            int p=nums[i];
            int check=true;
            int k=0;
            int tempans=-1;
            for(int j=i+1;j<n;j++){
                int temp=nums[j];
                int diff=temp-p;
                if(v[k]==diff){
                    tempans=j-i+1;
                    ans=max(ans,tempans);
                    k++;
                    p=nums[j];
                
                }
                else{
                    ans=max(ans,tempans);
                    break;
                    tempans=0;
                    k=0;
                    
                    
                }
                
                
            }
        }
        return ans;
        
    }
void myf(){


    vector<int> nums={2,3,4,3,4};
    // vector<int> a={1,3};
    // vector<int> b={2,2};
    cout<<alternatingSubarray(nums)<<endl;
    
    

    


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