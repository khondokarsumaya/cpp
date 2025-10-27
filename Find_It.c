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
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}