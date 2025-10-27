#include<stdio.h>
int main(){
int a,b,i,gcd=0;
scanf("%d%d",&a,&b);
if(a>b){
    b=a^b;
    a=a^b;
    b=a^b;
}

for(i=1;i<=a;i++){
if(a%i==0 && b%i==0)
gcd=i;
}

printf("%d",gcd);
}



