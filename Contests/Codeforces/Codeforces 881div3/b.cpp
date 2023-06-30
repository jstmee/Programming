#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> temp(n),v;
    for(int i=0;i<n;i++){
        cin>>temp[i];
        if(temp[i]!=0){
            v.push_back(temp[i]);

        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(temp[i]);
    }
    /*
    
    */
    v.push_back(4);
    int ans=0;
    // int tempans=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<0 && v[i+1]>0){
            ans++;
            // tempans=max(ans,tempans);
        }
        // else 
        // {
        //     ans=0;

        // }
        

    }
    cout<<sum<<" "<<ans<<endl;


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