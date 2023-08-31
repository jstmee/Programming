#include<bits/stdc++.h>
#define int long long
using namespace std;
/*
10 19 7 1 17 11 8 5 12 9 4  18 14 2  6  15 3  16 13
1  2  3 4 5  6  7 8 9 10 11 12 13 14 15 16 17 18 19
*/
void myf(){
    string s1,s2;cin>>s1>>s2;
    if(s1[0]!=s2[0]){
        cout<<"NO"<<endl;
        return;
    }
    // int check=0;
    int oneind=s1.size();
    for(int i=1;i<s1.size()-1;i++){
        if(s1[i]==s2[i] && s1[i]=='1'){
            oneind=i;
            break;
        }
    }
    string p1=s1,p2=s2;
    for(int i=oneind;i<s1.size();i++){
        p1[i]='1';
        p2[i]='1';
    }
    if(p1==p2){
        cout<<"YES"<<endl;return;
    }
    int zeroind=-1;
    for(int i=s1.size()-2;i>=1;i--){
        if(s1[i]==s2[i] && s1[i]=='0'){
            zeroind=i;
            break;
        }
    }
    string q1=s1,q2=s2;
    for(int i=0;i<=zeroind;i++){
        q1[i]='0';
        q2[i]='0';
    }
    if(q1==q2){
        cout<<"YES"<<endl;return;
    }

    if(zeroind <oneind){
        for (int i = 0; i <= zeroind; i++)
        {
            p1[i] = '0';
            p2[i] = '0';
        }
        if (p1 == p2)
        {
            cout << "YES" << endl;
            return;
        }
        for (int i = oneind; i < s1.size(); i++)
        {
            q1[i] = '1';
            q2[i] = '1';
        }
        if (q1 == q2)
        {
            cout << "YES" << endl;
            return;
        }
    }
    



    cout<<"NO"<<endl;return;




    
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