#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
   // fgets(s,1000001,stdin);
   scanf("%s",s);
    int i=0;
    int sum=0;
    for(i=0;s[i]!='\0';i++){
        sum=sum+s[i]-48;
    }
    printf("%d",sum);
    
    return 0;
}