#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int min=INT_MAX;
    int max=INT_MIN;
    int pos_max,pos_min;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
            pos_max =i;
        }
        if(a[i]<min){
            min=a[i];
            pos_min=i;

        }
    }
    
        int temp=a[pos_max];
        a[pos_max] = a[pos_min];
        a[pos_min] = temp;

        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    
    return 0;
}