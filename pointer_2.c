#include<stdio.h>
void fun(int x){
    int d=x;
    x=300;
    printf("fun function er x=%d\n",x);
}
int main()
{
    int x=200;
    int *p=&x;
    int *p2=p;
    *p2=100;
    printf("main function er x=%d\n",x);    
    fun(x); 
    return 0;
}