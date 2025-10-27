#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>a[N];
bool vis[N];
void dfs(int s){
    vis[s]=true;
    cout<<s<<" ";
    for(auto v:a[u]){
        if(vis[v]!=true){
            dfs(v);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        adj[v].push_back(u);

    }
    dfs(1);
    return 0;
}