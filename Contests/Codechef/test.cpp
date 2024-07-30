#include<bits/stdc++.h>
#define int long long
using namespace std;



void myf(){
    int n,m;cin>>n>>m;
    vector<int> v1(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    vector<int> temp1;
    int ans=0;
    int j=0,k=0;
    for(int i=0;i<m;i++){
        int num=v2[i];
        while(j<n and v1[j]<num){
            j++;
        }
        // temp1.push_back(j);

        while(k<n and v1[k]<=num){
            k++;
        }
        ans+=(k-j);


    }
    cout<<ans<<endl;
    // vector<int> temp2;
    // j=n-1;
    // for(int i=m-1;i>=0;i--){
    //     int num=v2[i];
    //     while(j>=0 and v1[j]>num){
    //         j--;
    //     }
    //     temp2.push_back(m-j);
    // }
    // reverse(temp2.begin(),temp2.end());
    // int sum=0;
    // for(int i=0;i<m;i++){
    //     sum+=(n-(temp1[i]+temp2[i]));
    // }
    // cout<<sum<<endl;
    
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