#include<bits/stdc++.h>
#define int long long
using namespace std;

// question-no of ways to reach n step 1 step 2, step 3 are allowed only
// concept of level ,choice ,check and move
//
//level- current stair
//choice- wht are my choices ie 1 steps,2 steps or 3 steps
//check -mean is this choice is valid or not ie out of all the choices which make s sense and whick does nt
//move- move to the level +1,2,3;

//whole code
// int n;
//level denote the at which stair we are currently
// return the no of step takenif we are  at step level
int rec(int level,int n){

    //pruning
    if(level>n){
        return 0;
    }

    //base case
    if(level==n){
        return 1; //generally on counting we return 1 or 0
    }


    int ans=0;
    //
    //looping over the all the choices
    for(int step=1;step<=3;step++){
        
        //check step
        if(level+step<=n){

            int way=rec(level+step,n);
            ans+=way;

        }
    }

    return ans;
     

    





}

void myf(){
    int n;
    cin>>n;
    cout<<rec(1,n);

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