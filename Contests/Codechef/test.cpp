#include<bits/stdc++.h>
#define int long long
using namespace std;

//n-1=0
// n-2=1
// n-3=2
//y=0
//y=1
//y=2
//n-1-n+1
// -2+1
//n-1-n+1
//n-2-n+1
//n-2-n+3
void rotate90Clockwise(vector<vector<char>> &v,int N,vector<vector<char>> &v2)
{
    // printing the matrix on the basis of
    // observations made on indices.
    for (int j = 0; j < N; j++) 
    {
        int t=1;
        for (int i = N - 1; i >= 0; i--){
            // cout << v[i][j] << " ";
            // cout<<v[i][j]<<" ";
            // cout<<j<<" "<<i-N+t<<" ";
            // v2[j][]=v[i][j];
            v2[j][i-N+t]=v[i][j];
            t++;
            t++;
            

        }
        // cout << '\n';
            
    }
}

void myf(){
    int n;cin>>n;
    // char arr[n][n];
    vector<vector<char>> v(n,vector<char> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<char>> v2(n,vector<char> (n));
    rotate90Clockwise(v,n,v2);
    for(auto it:v2){
        for(auto itt:it){
            cout<<itt<<" ";
        }
        cout<<endl;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(v[i][j]==v2[i][j]){
                continue;
            }
            int diff=v2[i][j]-v[i][j];
            if(diff<0){
                continue;
            }
            ans+=diff;

        }
    }
    // cout<<ans<<endl;
}


int32_t main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}