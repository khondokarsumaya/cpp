#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int count[100001]={0};
    for(int i=1;i<=n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=m;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}