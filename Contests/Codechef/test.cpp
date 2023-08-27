#include<bits/stdc++.h>
#define int long long
using namespace std;

long long minimumPossibleSum(int n, int target) {
        
        int sum=0;
        int temp=1;
        int count=0;
        unordered_map<int,int> mp;
        while(true){
            int diff=target-temp;
            if(mp.find(diff)!=mp.end()){
                count++;
                sum+=temp;
                mp[temp]++;
            }
            
            temp++;
            if(count==n){
                break;
            }
            
            
            
            
        }
        
        
        return sum;
        
    }

void myf(){
    cout<<minimumPossibleSum(3,3)<<endl;
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