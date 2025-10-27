#include<stdio.h>
int swap(int *x,int *y){
    printf("%d %d\n",*x,*y);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d\n",*x,*y);
}
int main()
{
    int a=5,b=10;
    //scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);

    swap(&a,&b);

    printf("%d %d\n",a,b);
    return 0;
}