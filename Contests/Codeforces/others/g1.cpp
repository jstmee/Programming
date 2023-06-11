#include <bits/stdc++.h>
#define int long long
using namespace std;




void myf(){
    vector<int> v={0,3,1,4,1,5,9};
    vector<char> c={'A','B','C','D','E','F','G'};

    char a,b;cin>>a>>b;
    int p=a-65;
    int q=b-65;
    if(p<q){
        int sum=0;
        for(int i=p+1;i<=q;i++)
        {
            sum+=v[i];
            
        }
        cout<<sum<<endl;return;
    }
    else{
        int sum=0;
        for(int i=q+1;i<=p;i++)
        {
            sum+=v[i];
            
        }
        cout<<sum<<endl;return;

    }
}
int32_t main() {
	// your code goes here
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
