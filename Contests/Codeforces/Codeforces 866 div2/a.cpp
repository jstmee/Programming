#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;
    cin>>s;
    
    string t;
    
    for(auto &it:s){
        if(it=='_'){
            if(t.empty() || t.back()=='_')
                t.push_back('^');
                
            t.push_back('_');
        }
        
        else
            t.push_back(it);
            
    }
    
    if(t.back()=='_')
        t.push_back('^');
    if(t.size()==1)
        t+='^';
        
    cout<<t.size()-s.size()<<"\n";

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