#include<bits/stdc++.h>
#define int long long
using namespace std;
/*rough work


*/

void myf(){
    string s;cin>>s;
    //??01?
    //0?1?10?10
    char c='0';
    for(int i=0;i<s.size();i++){
        if(s[i]=='?'){
            s[i]=c;
        }
        else{
            c=s[i];
        }
    }
    cout<<s<<endl;return;
    


    






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