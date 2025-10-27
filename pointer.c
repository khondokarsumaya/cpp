#include<stdio.h>
int main()
{
    int x=10;
    //printf("%p\n",&x);
    int* p=&x;
    *p=300;
    printf("%d",x);
    return 0;
}