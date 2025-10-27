#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool vis[N];
int dis[N];
int par[N];

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    dis[s]=0;
    par[s]=-1;
    while(!q.empty()){

        int parent=q.front();
        q.pop();
        for(auto child:adj[parent]){

            if(vis[child]!=true){
                q.push(child);
                par[child]=parent;
                dis[child]=dis[parent]+1;
                vis[child]=true;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    bfs(1);
    int d;
    cin>>d;
    if(vis[d]){
    vector<int>path;
    int x=d;
    while(x!=-1  ){
        path.push_back(x);
        x=par[x];

    }
    reverse(path.begin(),path.end());
    for(int val:path){
        cout<<val<<" ->";
    }
    }
    else {
        cout<<"Path nai"<<endl;
    }
    return 0;
}