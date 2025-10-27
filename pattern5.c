#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    s=n;
    k=1;
    int i;
    for(i=1;i<=(2*n)-1;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
    
    if(i<=n-1){
        s--;
        k+=2;
    }
    else{
        s++;
        k-=2;
    }
    printf("\n");
    }
    return 0;
}