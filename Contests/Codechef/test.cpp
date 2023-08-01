#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve(int i,int n,vector<int> &ans,string &temp){
        if(i>n){
            ans.push_back(stoi(temp));
            return;
        }
        // string temp="";
        for(int i=0;i<=9;i++){
            
            if(temp.size()==0 || temp.back()-'0'>i){
                char cc=(char)(i+48);
                temp.push_back(cc);
                solve(i+1,n,ans,temp);
                temp.pop_back();
            }
            else{
                return ;
            }
        }
    }
    vector<int> increasingNumbers(int n)
    {
        // Write Your Code here
        vector<int> ans;
        string p="";
        solve(1,n,ans,p);
        // for(auto it:ans){
        //     cout<<it<<" ";
        // }
        return ans;
        
    }
void myf(){

    // vector<int> temp={6,6,6,6};
    // int k=0;
    // cout<<distributeCandies(temp)<<endl;
    auto pp=increasingNumbers(1);
    for(auto it:pp){
        cout<<it<<" ";
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