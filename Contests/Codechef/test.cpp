#include<bits/stdc++.h>
#define int long long
using namespace std;

bool check(string s){
    string p=s;
    reverse(s.begin(),s.end());
    if(p==s){
        reverse(s.begin(),s.end());
        return true;
    }
    reverse(s.begin(),s.end());
    return false;
}
bool solve(int i,string s,int n){
    
    if(s.size()==1){
        return true;
    }
    
    if(i==n-2){
        if(s.size()==1){
            return true;
        }
        string temp="";
        for(int i=0;i<n-3;i++){
            temp+=s[i];
            
        }
        if(check(temp)){
            return true;
        }
        
        return false;
        
        
        
    }
    //case 1 remove it 
    string p="";
    for(int j=0;j<i-1;j++){
        p+=s[j];
    }
    for(int j=i+2;j<n;j++){
        p+=s[j];
    }
    if(check(p)){
        return true;
    }
    if(solve(i+1,p,n)){
        return true;
    }
    
    
    //case 2 
    if(solve(i+1,s,n)){
        return true;
    }
    
    return false;
    
}
void myf(){
    
    int n;cin>>n;
    string s;cin>>n;
    if(check(s)){
        cout<<"YES"<<endl;return;
    }
    if(solve(1,s,n)){
        cout<<"YES"<<endl;return;
    }
    cout<<"NO"<<endl;
    


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