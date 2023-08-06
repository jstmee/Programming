#include<bits/stdc++.h>
#define int long long
using namespace std;


long long solve(int i,int n,int k,vector<vector<int> > &items,unordered_set<int> &s){
        
        if(k==0){
            return (s.size())*(s.size());
        }
        if(i>=n){
            if(k==0){
                return (s.size())*(s.size());
            }
            return INT_MIN;
        }
        
        
        
        //take it
        int ans1=INT_MIN;
        s.insert(items[i][1]);
        ans1=items[i][0]+solve(i+1,n,k-1,items,s);
        s.erase(items[i][1]);
        
        int ans2=INT_MIN;
        ans2=solve(i+1,n,k,items,s);
        return max(ans1,ans2);
        
    }
    long long findMaximumElegance(vector<vector<int>>& items, int k) {
        
        
        int n=items.size();
        unordered_set<int> s;
        return solve(0,n,k,items,s);
        
    }

void myf(){

    int n;cin>>n;
    vector<int> v(n);
    // int maxi=INT_MIN;
    // set<int> s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        // s.insert(v[i]);
        // maxi=max(maxi,v[i]);
    }
    for(int j=0;j<=100;j++){
        int temp=j;
        v[0]+=temp;
        int check=0;
        for(int k=1;k<n;k++){
            if(v[0]<=v[k]){
                check=1;

                break;
            }
        }
        if(check==0){
            cout<<temp<<endl;return;
        }
        v[0]-=temp;
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