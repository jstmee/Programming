#include <bits/stdc++.h>
#define int long long
using namespace std;



vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            int a=abs(arr[i]-x);
            pq.push({a,arr[i]});
            if(pq.size()>k+1){
                pq.pop();
            }
        }
        
        vector<int > ans;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }

void myf(){
    vector<int> v={12, 16, 22, 30, 35, 39, 42, 
         45, 48, 50, 53, 55, 56};
    int n=v.size();
    int k=4,x=35;
    vector<int> ans=printKClosest(v,n,k,x);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    
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
