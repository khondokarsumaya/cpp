#include<stdio.h>
int fun(char *a){
    a[0]='G';
}
int main()
{
    char a[6]="hello";
    fun(a);
        printf("%s",a);

    
    return 0;
}