// #include<bits/stdc++.h>
// #define int long long
// using namespace std;


// void myf(){
//     vector<int> v(4);
//     for(int i=0;i<4;i++){
//         cin>>v[i];
//     }
//     int check=v[0];
//     sort(v.begin(),v.end());
//     int ans=0;
//     for(int i=3;i>=0;i--){
//         if(v[i]!=check){
//             ans++;
//         }
//         else{
//             break;
//         }
//     }
//     cout<<ans<<endl;return;
    


// }



// int32_t main(){
//     #ifndef ONLINE_JUDGE
//            freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
//            freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
//     #endif
//     int t;
//     cin>>t;
    
//     while(t--){
//         myf();
//     }
//     return 0;
// }





#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
if constraint low then
-think bruteforce and recursion appraoch.



*/

vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<long long> ans;
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({nums[i],i});
        }
        map<int,int> indxtoel;
        for(int i=0;i<n;i++){
            indxtoel[i]=nums[i];
        }
        map<string,int> pairstringindx;
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            int a=p[i].first;
            int b=p[i].second;
            string tt=to_string(a)+"&"+to_string(b);
            pairstringindx[tt]=i;
        }
        vector<int> marked(n,0);
        vector<int> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+p[i].first;
        }
        int ttsum=0;
        for(auto it:queries){
            int indx=it[0];
            int noel=it[1];
            ttsum+=noel;
            int temp=prefix[n]-prefix[ttsum];
            int elthatindx=indxtoel[indx];
            string ss=to_string(elthatindx)+"&"+to_string(indx);
            int itsindx=pairstringindx[ss];
            if(itsindx>=ttsum){
                temp-=elthatindx;
                
            }
            ans.push_back(temp); 
        }
        
        return ans;
        
    }



void myf(){

    // vector<int> cc={1,2,2,1,2,3,1};
    // vector<vector<int>> q={{1,2},{3,3},{4,2}};
    vector<int> cc={1,4,2,3};
    vector<vector<int>> q={{0,1}};

    vector<long long> an=unmarkedSumArray(cc,q);


    for(auto it:an){
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