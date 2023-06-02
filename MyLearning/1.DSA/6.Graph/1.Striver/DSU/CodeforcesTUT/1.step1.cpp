#include<bits/stdc++.h>
#define int long long
using namespace std;

class Disjoint{
private:
    
    vector<int> parent,rank,size;
public:
    Disjoint(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }


    }

    int findparent(int node){

        if(node==parent[node]){
            return node;
        }
        return parent[node]=findparent(parent[node]);

    }

    void unionbyrank(int u,int v){

        int pu=findparent(u);
        int pv=findparent(v);

        if(pu==pv){
            return;
        }

        if(rank[pu]<rank[pv]){

            parent[pu]=pv;
        }
        else if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else {
            parent[pv]=pu;
            rank[pu]++;

        }


    }
    void unionbysize(int u,int v){
        int pu=findparent(u);
        int pv=findparent(v);

        if(pu==pv){
            return;
        }


        if(size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];


        }
        else{
            parent[pv]=pu;
            size[pu]+=size[pv];

        }
    }
       



};

void myf(){
    int n,m;cin>>n>>m;
    Disjoint d(n);
    for(int i=0;i<m;i++){
        string s;
        int u,v;
        cin>>s>>u>>v;
        if(s=="union"){
            d.unionbysize(u,v);
        }
        else{
            int a=d.findparent(u);
            int b=d.findparent(v);
            if(a==b){
                cout<<"YES"<<endl;
                
            }
            else{
                cout<<"NO"<<endl;


            }
            
        }
    }



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