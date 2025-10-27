#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
int rem=a%b;
while(rem!=0){
    a=b;
    b=rem;  
    rem=a%b;
}
printf("%d\n",b);

}