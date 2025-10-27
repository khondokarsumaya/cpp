#include<stdio.h>
#include<limits.h>
int main(){
int n,min=INT_MAX,count=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
if(a[i]<min){
     min=a[i];;
}
}
for(int i=0;i<n;i++){
    if(a[i]==min){
        count++;
    }
}
if(count%2!=0){
    printf("Lucky\n");
}
else{
    printf("Unlucky\n");
}

}