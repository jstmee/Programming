#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n,q;cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> sum(n+1);
    sum[0]=0;
    sum[1]=v[0];
    for(int i=2;i<n+1;i++){
        sum[i]=sum[i-1]+v[i-1];

    }

    while(q--){
        int l,r,k;cin>>l>>r>>k;
        // l--;
        // r--;
        int diff=r-l+1;
        int sumdiff=diff*k;

        int temp=sum[n] -(sum[r]-sum[l-1])+sumdiff;
        if(temp%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


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