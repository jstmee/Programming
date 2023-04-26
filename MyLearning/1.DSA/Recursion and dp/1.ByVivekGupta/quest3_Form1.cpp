#include<bits/stdc++.h>
#define int long long
using namespace std;

//question: given n problems and ith problem is of {ti ,si}
// ti=time for ith problem and si=skil u get after solving it
//you have x time and k slots find maxskill u can get?

//level - item no
//chioice- ither take or dont take
//check - time and count check
//move - got to next level

int n,x,k;
bool take[10001];
int t[10001];
int s[10001];

bool check(int level){
    int ttime=0;
    int titems=0;
    for(int i=0;i<=level;i++){
        if(take[i]){
            ttime+=t[i];
            titems+=s[i];
        }
    }
    if(ttime<=x && titems<=k){
        return 1;
    }
    else return 0;
}
//this funtion return the max skill we can get from current level to n-1
int rec(int level){

    //pruning

    //base case 
    if(level==n){
        return 0;

    }

    //looping over the choices
    //choice1 not take we can always not take any item
    int ans=rec(level+1);

    if(check(level)){
        take[level]=1;
        ans+=s[level]+max(ans,rec(level+1));
        take[level]=-1;
    }

    return ans;

    

}

//optimizing the code
//return max skill we can get fomr level to n-1;
int oprec(int level,int time_taken,int items_taken){

    if(level==n){
        return 0;
    }


    int ans=oprec(level+1,time_taken,items_taken);
    if(time_taken<=x && items_taken<=k){
        ans=max(ans,s[level]+oprec(level+1,time_taken+t[level],items_taken+1));
    }

    return ans;



}
void myf(){
    memset(take,-1,sizeof(take));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i]>>s[i];
    }
    cin>>x>>k;
    // cout<<rec(0)<<endl;
    cout<<oprec(0,0,0);




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