#include<bits/stdc++.h>
#define int long long
using namespace std;


bool solve(long long mid,vector<int> &candies,long long k){

        int sum=0;
        for(int i=0;i<candies.size();i++){

            sum+=(candies[i]/mid);
            

        }
        return sum>=k;
    }
int maximumCandies(vector<int>& candies, long long k) {



        int n=candies.size();
        
        int i=1,j=1e7;
        while(i<j){
            long long mid=i+(j-i)/2;

     
            if(solve(mid,candies,k)){

                i=mid;

            }
            else{
                j=mid-1;
            }
        }

        return j-1;
        
}
void myf(){

    vector<int> temp={10000000};
    long long k=1;
    cout<<maximumCandies(temp,k)<<endl;
    


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