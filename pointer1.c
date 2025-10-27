#include<stdio.h>
int main()
{
    int *a,b=5;

    a=&b;

    printf("%d\n",b);

    printf("%d\n",a);

    *a=10;

    printf("%p\n",&b);

    printf("%d\n",b);


    

    return 0;
}