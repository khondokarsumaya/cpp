#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(b){
        int rem=a%b;
        a=b;
        b=rem;
    }
    printf("%d",a);
    return 0;
}