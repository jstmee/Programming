/*
https://leetcode.com/problems/move-zeroes/?envType=list&envId=rvw74t0j





*/

#include<bits/stdc++.h>
#define int long long
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(int k=j;k<n;k++){
            nums[k]=0;
        }
        
    }
};
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