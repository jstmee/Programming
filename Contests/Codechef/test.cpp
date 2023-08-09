#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    string s;cin>>s;
    int a=0,b=0;
    int n=s.size();
    for(int i=0;i<(int)s.size();i++){
        if(s[i]<'a'){
            a++;
        }
        else{
            b++;
        }
    }

    if(a>b){
        for(int i=0;i<n;i++){
            s[i]=toupper(s[i]);

        }
        cout<<s<<endl;


    }
    else{

        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);

        }
        cout<<s<<endl;

    }

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