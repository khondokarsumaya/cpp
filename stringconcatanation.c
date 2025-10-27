#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[50];
    scanf("%s%s",a,b);
    int i=0;
    int k=strlen(a);
    for(i=0;i<strlen(b);i++){
        a[k]=b[i];
        k++;

    }
    a[k]='\0';
    printf("%s",a);
    return 0;
}