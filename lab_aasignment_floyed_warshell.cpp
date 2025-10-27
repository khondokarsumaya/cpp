#include<bits/stdc++.h>
using namespace std;
const int INF=1e5;
int main()
{
    int n,e;
    cin>>n>>e;
    int dis[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dis[i][j]=INF;
            if(i==j){
            dis[i][j]=0;
            }
        }
    }
    while(e--){
        int a,b,w;
        cin>>a>>b>>w;
        dis[a][b]=w;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dis[i][j]==INF){
                cout<<"INF"<<" ";

            }
            else cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int k=1;k<=n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dis[i][j]>dis[i][k]+dis[k][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];

                }
            }
        }
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(dis[i][i]!=0){
            found=true;
            break;
        }
    }
    cout<<endl<<endl;
    if(found==true){
        cout<<"cycle is detected"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dis[i][j]==INF){
                cout<<"INF"<<" ";

            }
            else cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }

    }

    return 0;
}