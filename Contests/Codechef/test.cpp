#include<bits/stdc++.h>
#define int long long
using namespace std;


vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_map<int,int> mp1,mp2;
        int a=1;
        int b=1;
        if(x!=1){
            while(true){
                if(a>bound){
                    break;
                }
                mp1[a]++;
                a=a*x;
            }
        }
        else{
            mp1[a]++;
        }
        if(y!=1){
                while(true){
                    if(b>bound){
                        break;
                    }
                    mp2[b]++;
                    b=b*y;
                }
        }
        else{
            mp2[b]++;
        }
        vector<int > ans;
        for(int i=1;i<=bound;i++){
            int sum=i;
            for(auto it:mp1){
                int rest=sum-it.first;
                if(mp2.find(rest)!=mp2.end()){
                    ans.push_back(i);
                }
            }
        }
        return ans;
        
    }
void myf(){

    // vector<int> temp={6,6,6,6};
    // int k=0;
    // cout<<distributeCandies(temp)<<endl;
    auto pp=powerfulIntegers(1,2,100);
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