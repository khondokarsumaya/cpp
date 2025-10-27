#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int,int>>adj[N];
bool vis[N];
int dis[N];
void dijkstra(int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,s});
    dis[s]=0;
    while(!pq.empty()){
        pair<int,int>parent=pq.top();
        pq.pop();
        int parentNode=parent.second;
        if(vis[parentNode]){
            continue;

        }
        vis[parentNode]=true;
        int parentCost=parent.first;
        for(pair<int,int>child:adj[parentNode]){
           // pair<int,int>child= adj[parentNode][i];
            int childNode=child.first;
            int childCost=child.second;
            if(dis[childNode]>childCost+parentCost){
            dis[childNode]=parentCost+childCost;
            pq.push({dis[childNode],childNode});
            }
        }


    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    for(int i=1;i<=n;i++){
        dis[i]=INT_MAX;
    }
    dijkstra(1);
    for(int i=1;i<=n;i++){
        cout<<"Distance of"<<i<<" :"<<dis[i]<<endl;
    }
    return 0;
}