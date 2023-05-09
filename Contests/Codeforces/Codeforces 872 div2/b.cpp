#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,m;cin>>n>>m;
    vector<int> v(n*m);
    for(int i=0;i<n*m;i++){
        cin>>v[i];
    }
    int tt=m*n;
    sort(v.begin(),v.end());
    int maxi=v[tt-1];
    int mini=v[0];
    int smini=v[1];
    // 4 1 3*(3) +3
    // 1
    //case 1 putting max value on topleft
    int ans1=0;
    int tempans1=(m-1)*n*(maxi-mini)+(n-1)*(maxi-smini);
    int tempans2=(n-1)*m*(maxi-mini)+(m-1)*(maxi-smini);
    //7 8 9 -3 10 8 //
    // // // //
    // 
    //
    ans1=max(tempans1,tempans2);

    //case 2 putting mini value in topleft
    int ans2=0;
    int tempans3=(m-1)*n*(maxi-mini)+(n-1)*(v[tt-2]-mini);
    int tempans4=(n-1)*m*(maxi-mini)+(m-1)*(v[tt-2]-mini);

    ans2=max(tempans3,tempans4);
    cout<<max(ans1,ans2)<<endl;







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