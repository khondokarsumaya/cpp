#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+5;
vector<pair<pii,int>>list_of_edges;
int n,m;
int d[N];
const int INF=1e5+3;
void bellman_ford(int s){
    for(int i=1;i<=n;i++){
        d[i]=INF;
    }
    d[s]=0;
    for(int i=1;i<=n;i++){
        for(auto edge:list_of_edges){
            int u=edge.first.first;
            int v=edge.first.second;
            int w=edge.second;
            if(d[u]!=INF&&d[v]>d[u]+w){
                d[v]=d[u]+w;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        list_of_edges.push_back({{u,v},w});
    }
    bellman_ford(1);
    for(int i=1;i<=n;i++){
        cout<<"distance of "<<i<<" : "<<d[i]<<endl;
    }
    
    return 0;
}