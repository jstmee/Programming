#include<bits/stdc++.h>
#define int long long
using namespace std;
// int ans=0;

int ans = INT_MAX;
void solve(vector<int> &temp, int n, int k, int sum, int i)
{
    if(sum>=ans){
        return;
    }
    if (temp.size() == n)
    {
        // ans = min(ans, sum);
        // bool check=false;
        ans=min(ans,sum);
        return;
    }
    for (int j = i; j <= 100; j++)
    {
        temp.push_back(j);
        bool check=false;
        for(int pp=0;pp<temp.size();pp++){
            for(int qq=pp+1;qq<temp.size();qq++){
                if(temp[pp]+temp[qq]==k){
                    check=true;
                    break;
                }
            }
        }
        if(check==false){
            solve(temp, n, k, sum + j, temp.back()+1);

        }
        temp.pop_back();
    }
}
int minimumSum(int n, int k)
{
    // vector<int> temp = {};
    // int sum = 0;
    // solve(temp, n, k, sum, 1);
    // return ans;
    
}
void myf(){
    cout<<minimumSum(5,4)<<endl;

    


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