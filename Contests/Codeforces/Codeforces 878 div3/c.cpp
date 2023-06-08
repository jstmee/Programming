#include<bits/stdc++.h>
#define int long long
using namespace std;

int ncr(int it,int k){

    // int temp=it;
    int temp2=k;
    // int times=k;
    int lower=k;
    for(int i=1;i<k;i++){
        temp2=temp2-1;
        lower=lower*temp2;
        
    }
    int upper=it;
    int temp3=it;
    for(int i=1;i<k;i++){
        temp3=temp3-1;
        upper=upper*temp3;

    }

    return upper/lower;



}

void myf(){
    int n,k,q;cin>>n>>k>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> temp;
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]<=q){
            ans++;
        }
        else{
            temp.insert(ans);
            ans=0;
        }
    }
    temp.insert(ans);
    // for(auto it:temp){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    vector<int> temp2;
    for(auto it:temp){
        if(it!=0){
            temp2.push_back(it);
        }
    }
    int sum=0;
    for(auto it:temp2){
        int p=it;
        //itck
        for(int i=k;i<=it;i++){
            int tt=ncr(it,i);
            sum+=tt;

        }

        


        
    }
    cout<<sum-1<<endl;

    // cout<<ncr(5,3)<<endl;


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