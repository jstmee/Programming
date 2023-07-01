#include<bits/stdc++.h>
#define int long long
using namespace std;

bool check(int i,int j,string &s,string &p,string &q,vector<vector<int>> &prefix){
    // if(dp[i][j]!=-1){
    //     return dp[i][j];
    // }
    bool val=false;
    char c=p[i];
    char e=q[i];
    for(char cc=c;cc<=e;cc++){
        if(j>=s.size()){
            val=true;
            break;
        }
        int temp=prefix[j][cc-'0'];
        if(temp==-1){
            val=true;
            break;
        }
        if(i<p.size()-1){
            val=val||check(i+1,temp+1,s,p,q,prefix);
        }
        if(val){
            break;
        }
    }
    return val;
}
void myf(){
    
    string s;cin>>s;
    int sz;cin>>sz;
    string p,q;
    cin>>p>>q;
    int n=s.size();
    // vector<vector<int>> dp(sz+1,vector<int> (n+1,-1));
    vector<vector<int>> prefix(n);
    vector<int> curr(10,-1);
    for(int i=s.size()-1;i>=0;i--){
        curr[s[i]-'0']=i;
        prefix[i]=curr;
    }
    if(check(0,0,s,p,q,prefix)){
        cout<<"YES"<<endl;return;
    }
    cout<<"NO"<<endl;


}



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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