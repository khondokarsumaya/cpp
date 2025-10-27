#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=m;i++){
            printf("%d ",a[n][i]);
        
    }
    printf("\n");
    for(int i=1;i<=n;i++){
            printf("%d ",a[i][m]);
        
    }
    return 0;
}