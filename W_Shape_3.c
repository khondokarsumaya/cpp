#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int s=n-1;
    int i;
    for(i=1;i<=2*n;i++){
        for(int j=s;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=(2*k)-1;j++){
            printf("*");
        }
        if(i<=n-1){
            k++;
            s--;
        }
        
        else if(i>n){
            k--;
            s++;
        }
        printf("\n");

    }
    return 0;
}