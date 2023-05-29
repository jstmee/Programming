#include<bits/stdc++.h>
#define int long long
using namespace std;

/*


code snippet





*/


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