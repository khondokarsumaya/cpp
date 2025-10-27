#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
const int INF=1e9+7;
int d[N][N];
int n,m;
void print_matrix(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(d[i][j]==INF) {cout<<"X"<<" ";}
            else cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }


}
void distance_initialize(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                d[i][j]=INF;
            }
        }
    }
} 
int main()
{
    cin>>n>>m;
     distance_initialize();
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        d[u][v]=w;
    
    }
    print_matrix();
    for(int k=1;k<=n;k++){
        for(int u=0;u<n;u++){
            for(int v=0;v<n;v++){
                d[u][v]=min(d[u][v],d[u][k]+d[k][v]);
            }
        }
    }
    cout<<"after flyod marshell"<<endl;
    bool found=false;
    for(int i=0;i<n;i++){
                d[i][i]!=0;
                found=true;
                break;
            }
            
    if(found==true){
        cout<<"cycle is delected"<<endl;
    }
    else {
    print_matrix();
    }

    
    return 0;
}