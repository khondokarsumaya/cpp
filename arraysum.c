#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                count++;
            }
        }
    }
    if(count==0){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
    return 0;
}