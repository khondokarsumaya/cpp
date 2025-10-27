#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("0 index er address=%p\n",&a[0]);    
    printf("0 index er address=%p\n",a);    
    printf("1 index er value=%d\n",*(a+1));    
    printf("1 index er value=%d\n",*(1+a));    
    printf("1 index er value=%d\n",1[a]);    
    printf("1 index er value=%d\n",a[1]);    

    return 0;
}