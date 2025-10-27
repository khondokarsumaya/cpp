#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count_even=0,count_odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("%d %d",count_even,count_odd);
    return 0;
}