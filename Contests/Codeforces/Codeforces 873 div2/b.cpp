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
    for(int i=0;i<n;i++){
        int temp=abs(v[i]-i-1);
        if(temp!=0){
            ans.push_back(temp);
        }
    }
    int myans=ans[0];
    for(int i=1;i<ans.size();i++){
        myans=__gcd(ans[i],myans);
    }
    cout<<myans<<endl;
    return;
    

    


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