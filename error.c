#include <stdio.h>
#include <string.h>

int show(int n)
{
    if(n==0)
    {
        printf("\n");
        return 0;
    }
    printf("%d ",n);

    int sum=show(n-1);
    sum+=n;

    printf("%d ",sum);

    return sum;
}


int main()
{
    int n=10;
    show(n);

    return 0;
}