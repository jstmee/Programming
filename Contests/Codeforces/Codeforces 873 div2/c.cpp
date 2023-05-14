#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int mod=1e9+7;

    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &it:a)
    cin>>it;
    for(auto &it:b)
    cin>>it;
    sort(a.begin(),a.end());
    int end=n-1;
    int start=0;
    int cnt=0;
    int ans=1;
   for (int  i = n-1; i >=0; i--)
   {
       while(end>=0&&a[end]>b[i])
       {
        cnt++;
        end--;
       }
       ans=(ans*(cnt))%mod;
       cnt--;
   }
    cout<<ans%mod<<endl;


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