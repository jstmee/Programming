#include<bits/stdc++.h>
#define int long long
using namespace std;

void myf(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans;
    int p=1;
    ans.push_back(1);
    for(int i=0;i<n;i++){
        if(v[i]==1){
            
            ans.push_back(p+1);
        }
        else{
            
            ans.push_back(p);
        }
    }
    if(v[n-1]==(ans[0]+ans[n-1])%2){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;
    
    


    




    
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