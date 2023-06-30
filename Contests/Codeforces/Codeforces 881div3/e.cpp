#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,m;cin>>n>>m;
    vector<pair<int,int>> v(m);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        a--;
        b--;
        v[i].first=a;
        v[i].second=b;
    }
    int q;cin>>q;
    vector<int> query(q);
    for(int i=0;i<q;i++){
        cin>>query[i];
        query[i]-=1;
    }
    int l=0,r=q+1;
    while(r-l>1){

        int mid=(l+r)/2;
        vector<int> curr(n,0);
        for(int i=0;i<mid;i++){
            curr[query[i]]=1;
        }
        vector<int> prefix(n+1,0);
        for(int i=1;i<=n;i++){
            prefix[i]=curr[i-1]+prefix[i-1];
        }
        bool tempans=false;
        for(auto it:v){
            int p=it.first;
            int q=it.second;
            if((prefix[q+1]-prefix[p])>(q-p+1)/2){
                tempans=true;
                break;
            }
        }
        if(tempans){
            r=mid;
        }
        else{
            l=mid;
        }


    }

    if(r==q+1){
        r=-1;
        
    }

    cout<<r<<endl;


    


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