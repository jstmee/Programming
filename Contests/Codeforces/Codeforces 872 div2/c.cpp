#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,m;cin>>n>>m;
    vector<int > v(n);
    set<int> ss;
    int l=0,r=0;
    vector<int> check(m,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==-1){
            l++;
        }
        else if(v[i]==-2) r++;
        else {
            ss.insert(v[i]);
            check[v[i]]=1;
        }
    }
    vector<int > prefix(m,0),suffix(m,0);
    prefix[0]=check[0];
    for(int i=1;i<m;i++){
        prefix[i]=prefix[i-1]+check[i];
    }
    suffix[m-1]=check[m-1];
    for(int i=m-2;i>=0;i--){
        suffix[i]=suffix[i+1]+check[i];
    }
    
    int ans1=min(m,l+(int)ss.size());
    int ans2=min(m,r+(int)ss.size());
    int ans=max(ans1,ans2);
    for(int i=0;i<m;i++){
        if(check[i]==1){
            int left=i;
            int right=m-i-1;
            int leftans=min(left,prefix[i]-1+l);
            int rightans=min(right,suffix[i]-1+r);
            int tempans=1+leftans+rightans;
            ans=max(ans,tempans);
        }
    }
    cout<<ans<<endl;return;

}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}