#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(vector<int> &vv){
    int n;cin>>n;


    cout<<vv[n]<<endl;
    return;


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    int ans=1;
    vector<int> vv(999999+6,0);
    vv[0]=0;
    vv[1]=1;
    for(int i=2;i<=999999;i++){

        string p=to_string(i);
        unsigned int count=0;
        for(unsigned int j=0;j<p.size();j++){
            if(p[j]=='0'){
                count++;
            }
        }
        if(count==(long long)p.size()-1){
            vv[i]=vv[i-1]+1;


        }
        else{
            vv[i]=vv[i-1];
        }

    }
    
    while(t--){
        myf(vv);
    }
    return 0;
}