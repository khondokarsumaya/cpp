#include<stdio.h>
int print(int x){
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}