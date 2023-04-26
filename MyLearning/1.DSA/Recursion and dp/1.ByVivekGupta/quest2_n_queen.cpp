#include<bits/stdc++.h>
#define int long long
using namespace std;
//n queen problem no of way to place n queens

//level- rows
//choice - which column 
//check - it is valid or not placing the queen at any colm
//move - place and move to the next level


// IMP WE NEED TO STORE THE PEVIOUS PLACED QUEEN

bool check(int row,int col,vector<int> &queen){

    for(int i=0;i<row;i++){
        int prow=i;
        int pcol=queen[i];
        if(pcol==col || abs(col-pcol)==abs(prow-row)){
            return 0;
        }
    }
    return 1;


}
// return the no of way to plave n queens from level row
int rec(int level,int n,vector<int> &queen){

    //pruning 



    //base case

    if(level==n){
        return 1;
    }
    int ans=0;
    //looping over the choices
    for(int col=0;col<n;col++){
        if(check(level,col,queen)){
            //place the queen on board
            queen[level]=col;
            //getting any ans or not if we place it here
            ans+=rec(level+1,n,queen);
            //remove it so that we can get more ans
            queen[level]=-1;
        }
    }

    return ans;

}
void myf(){
    int n;cin>>n;
    vector<int> queen(20,-1);
    cout<<rec(0,n,queen);


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