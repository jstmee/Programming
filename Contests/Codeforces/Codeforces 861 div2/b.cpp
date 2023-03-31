#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){

    int n,m;cin>>n>>m;
    vector<vector<int>> v(m,vector<int> (n,0));
    vector<vector<int>> temp(n,vector<int> (m,0));
    int p=0;
    int loop=n;
    while(loop--){

        for(int i=0;i<m;i++){
            cin>>temp[p][i];
            
        }
        p++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            v[j][i]=temp[i][j];


        }
    }

    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end(),greater<int > ());
    }

    
    int tempsum1=0;
    for(int i=0;i<m;i++){
        int tp=0;
        int mul=n-1;
        for(int j=0;j<n-1;j++){

            tp+=v[i][j]*mul;
            mul--;

        }
        tempsum1+=tp;
    }

    int tempsum2=0;
    for(int i=m-1;i>=0;i--){
        int  tp=0;
        int mul=n-1;
        for(int j=n-1;j>0;j--){

            tp+=v[i][j]*mul;
            mul--;

        }
        tempsum2+=tp;
    }


    cout<<tempsum1-tempsum2<<endl;







    


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