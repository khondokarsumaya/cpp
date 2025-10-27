#include<stdio.h>
#include<string.h>
int main()
{
    char s[100] ,b[100];
    scanf("%s%s",s,b);
    int i=0;
    for(i=0;i<strlen(b);i++){
        s[i]=b[i];

    }
    s[i]='\0';
    printf("%s",s);
    return 0;
}