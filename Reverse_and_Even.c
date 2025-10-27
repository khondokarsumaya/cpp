#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],a1[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int j=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        a1[j]=a[i];
        j++;
    }
}
for(int i=j-1;i>=0;i--){
    printf("%d ",a1[i]);
}


}