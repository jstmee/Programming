#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    string s;cin>>s;
    int n=s.size();
    int i=0;
    int j=n-1;
    set<char> myset;
    while(i<j){

        myset.insert(s[i]);
        i++;
        j--;

    }
    if(myset.size()>1){
        cout<<"YES"<<endl;return;
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