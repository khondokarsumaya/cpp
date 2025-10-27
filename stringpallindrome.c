#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem;
    int temp=n,sum=0;
    while(temp!=0){
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;

    }
    printf("%d",sum);
    return 0;
}