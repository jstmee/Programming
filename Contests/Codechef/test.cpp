#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            v.push_back((n-i-1)-i);
            sum+=i;
        }
        else{
            v.push_back(i-(n-i-1));
            sum+=n-i-1;
        }
    }
    sort(v.begin(),v.end(),greater<int> ());
    for(auto it:v){
        if(it>0){
            sum+=it;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    


    

    

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