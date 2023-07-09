#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){
    vector<vector<char>> v(3,vector<char> (3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }

    char c='O';
    int temp=0;
    int temp1=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(v[i][j]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }
        count=0;
        for(int j=0;j<3;j++){
            if(v[j][i]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }

        
        for(int j=0;j<3;j++){
            if(i==j && v[i][j]==c){
                temp++;
            }
        }
        if(temp==3){
            cout<<c<<endl;
            return;
        }
        

        for(int j=0;j<3;j++){
            if(i+j==2 && v[i][j]==c){
                temp1++;
            }
        }
        if(temp1==3){
            cout<<c<<endl;
            return;
        }
        
        
    }
    c='+';

    temp=0;
    temp1=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(v[i][j]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }
        count=0;
        for(int j=0;j<3;j++){
            if(v[j][i]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }

        
        for(int j=0;j<3;j++){
            if(i==j && v[i][j]==c){
                temp++;
            }
        }
        if(temp==3){
            cout<<c<<endl;
            return;
        }
        

        for(int j=0;j<3;j++){
            if(i+j==2 && v[i][j]==c){
                temp1++;
            }
        }
        if(temp1==3){
            cout<<c<<endl;
            return;
        }
        
        
    }

    c='X';
    temp=0;
    temp1=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(v[i][j]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }
        count=0;
        for(int j=0;j<3;j++){
            if(v[j][i]==c){
                count++;
            }
        }
        if(count==3){
            cout<<c<<endl;
            return;
        }

        
        for(int j=0;j<3;j++){
            if(i==j && v[i][j]==c){
                temp++;
            }
        }
        if(temp==3){
            cout<<c<<endl;
            return;
        }
        

        for(int j=0;j<3;j++){
            if(i+j==2 && v[i][j]==c){
                temp1++;
            }
        }
        if(temp1==3){
            cout<<c<<endl;
            return;
        }
        
        
    }


    cout<<"DRAW"<<endl;
    
    


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