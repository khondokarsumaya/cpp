#include<stdio.h>
int main()
{int n,k,s;
scanf("%d",&n);
s=0;
k=2*n-1;
 for(int i=0;i<n;i++){
    for(int j=s;j>0;j--){
        printf(" ");
    }
    for(int j=k;j>=1;j--){
        printf("*");
    }
    s++;
    k=k-2;
    printf("\n");
 }
    
    return 0;
}