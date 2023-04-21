#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    int n;cin>>n;
    vector<int> v1(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            a=i;
            break;
        }
    }
    for(int j=n-1;j>=0;j--){
        if(v1[j]!=v2[j]){
            b=j;
            break;
        }

    }
    // cout<<a+1<<" "<<b+1<<endl;
    
    vector<int> check;
    
    for(int i=a;i<=b;i++){
        check.push_back(v2[i]);

    }
    int p=check.size();
    if(p==1){
        cout<<a+1<<" "<<b+1<<endl;return;
    }

    // if(check[0]<=check[1]&&check[p-2]<= check[p-1]){
    //     cout<<a+1<<" "<<b+1<<endl;
    //     return;

    // }
    // cout<<a+1<<" "<<b+1<<endl;

    // 1 2 3 4 5 6 7 8
    // 1 5 6 2 3 4 7 8
    // vector<int> check2;
    // for(int i=0;i<p;i++){
    //     check2.push_back(check[i]);
    // }
    // int count=0,ending=-1;
    // int maxcount=INT_MIN;
    // sort(check2.begin(),check2.end());
    // for(int i=0;i<p;i++){
    //     if(check2[i]<=check[i]){
    //         count++;
    //         maxcount=max(maxcount,count);
    //         if(check2[i+1]>check[i]){
    //             count=0;
                
    //         }
    //     }

    // }


    for(int i=a;i>0;i--){
        if(v2[i-1]<=v2[i]){
            a--;
        }
        else {
            break;
        }
    }
    for(int i=b;i<n-1;i++){
        if(v2[i+1]>=v2[i]){
            b++;
        }
        else{
            break;
        }

    }
    cout<<a+1<<" "<<b+1<<endl;



        






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