#include<bits/stdc++.h>
#define int long long
using namespace std;

int hIndex(vector<int>& citations) {

        unordered_map<int,int> mp;
        for(auto it:citations){
            mp[it]++;
        }
        int ans=0;
        int temp=-1;
        for(int i=1;i<=1000;i++){
            int c1=0;
            for(auto it:mp){
                if(it.first>=i){
                    c1++;
                }
            }
            if(ans<=c1){
                ans=c1;
                temp=i;
            }
        }
        return temp;
        
    }
void myf(){

    vector<int> p={3,0,6,1,5};
    cout<<hIndex(p)<<endl;
    


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