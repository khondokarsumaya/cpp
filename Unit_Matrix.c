#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
            if(a[i][j]!=0){
                count=0;
            }
            }
            if(i==j){
                if(a[i][j]!=1){
                count=0;
                }
            }

        }
    }
    if(count==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}