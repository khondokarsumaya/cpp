#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
typedef pair<int ,int>pii;
vector<pii> g[N];
int d[N];
int INF=1e3+5;
int n,m;

void bellman_ford(int s){
    for(int i=1;i<=n;i++){
        d[i]=INF;
    
    }
    d[s]=0;
    for(int i=1;i<=n;i++){
        for(int u=1;u<=n;u++){
            for(pii vpair:g[u]){
                int v=vpair.first;
                int w=vpair.second;
                if(d[u]!=INF && d[v]>d[u]+w){
                    d[v]=d[u]+w;
                }
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
        g[u].push_back({v,w});
    }
    bellman_ford(1);
    for(int i=1;i<=n;i++){
        cout<<"distance of"<<i<<": "<<d[i]<<endl;
    }
    
    return 0;
}