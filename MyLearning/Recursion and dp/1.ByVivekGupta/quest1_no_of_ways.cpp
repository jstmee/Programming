#include<bits/stdc++.h>
#define int long long
using namespace std;

// question-no of ways to reach n step 1 step 2, step 3 are allowed only
// concept of level ,choice ,check and move
//
//level ,choice check adn move definations

//1.level-way to iterate over all the solution space efficently.
//2.choice - for each level wht move we can make to go to the next level
//check- for each choice check if the current partial solutin is valid or not
//move - if it is valid move evaluate that ans using recursion





//level- current stair
//choice- wht are my choices ie 1 steps,2 steps or 3 steps
//check -mean is this choice is valid or not ie out of all the choices which make s sense and whick does nt
//move- move to the level +1,2,3;



//whole code

int dp[1000005];
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

    if(dp[level]!=-1){
        return dp[level];
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

    return dp[level]=ans;
     

    





}

void myf(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
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