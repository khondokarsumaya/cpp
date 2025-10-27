#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    int ans[n+m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        ans[i]=a[i];
    }
    int i=5;
    for(int j=0;j<m;j++){
        ans[i]=b[j];
        i++;
    }
    for(int i=0;i<(m+n);i++){
        printf("%d ",ans[i]);
    }
    return 0;
}