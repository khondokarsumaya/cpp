#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    char s[101];
    scanf("%s",s);
    if(strlen(s)>10){
        printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
    }
    else{
        printf("%s\n",s);
    }
    }
    return 0;
}