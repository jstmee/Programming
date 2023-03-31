#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int l,r;
    cin>>l>>r;
    pair<int,int> pp;

    pp.first=INT_MIN;
    pp.second=-1;
    
    // int mini=INT_MIN;
    for(int i=max(l,r-5000);i<=r;i++){
        string p=to_string(i);
        int mini=10;
        int maxi=-1;
        for(int j=0;j<p.size();j++){
            if((p[j]-48)<mini){
                // int zz=p[i];
                mini=p[j]-48;
            }
            if((p[j]-48)>maxi){
                maxi=p[j]-48;
            }
        }
        int temp=(maxi)-(mini);
        if(temp>pp.first){
            pp.first=temp;
            pp.second=i;
        }
    }
    cout<<pp.second<<endl;


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