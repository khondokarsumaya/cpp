#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool vis[N];
int dis[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    dis[s]=0;
    while(!q.empty()){

        int parent=q.front();
        q.pop();
        cout<<parent<<endl;
        for(int i=0;i<adj[parent].size();i++){
            int child=adj[parent][i];
            if(vis[child]!=true){
                q.push(child);
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
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    bfs(1);
    for(int i=1;i<=n;i++){
        cout<<"distance of"<<i<<" :"<<dis[i]<<endl;
    }
    //bfs(1);
    return 0;
}