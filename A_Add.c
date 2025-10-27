#include<stdio.h>
int sum(int a,int b){
    int d=a+b;
    return d;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int d=sum(x,y);
    printf("%d\n",d);

    return 0;
}