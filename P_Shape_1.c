#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int k=n,s=0;
    for(int i=0;i<n;i++){
        //for(int j=s;j>=1;j--){
        //    printf(" ");
        //}
        for(int j=k;j>=1;j--){
            printf("*");
        }
        s++;
        k--;
        printf("\n");
    }
    return 0;
}