#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
int n;
scanf("%d",&n);
int a[n],sum=0;
long long int d;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=(sum+a[i]);

}
d=abs(sum);
printf("%lld",d);

return 0;
}