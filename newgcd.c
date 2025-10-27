#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    // if(a>b){
    // int temp=a;
    // a=b;
    // b=temp;
    // }
    int gcd;
    for(int i=2;i<a;i++){
        if( (a%i)==0 && (b%i)==0){
            gcd=i;
        }
    }
    printf("%d\n",gcd);
    int lcm=(a*b)/gcd;
    printf("%d",lcm);

    return 0;
}