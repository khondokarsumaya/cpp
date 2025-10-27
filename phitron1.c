#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,rem=0;
scanf("%d",&n);
do{
    rem=n%10;
    n=n/10;
    printf("%d  ",rem);

}
while(n!=0);
printf("\n");
}
return 0;

}