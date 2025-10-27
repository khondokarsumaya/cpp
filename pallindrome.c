#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int count=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!=s[len-1-i]){
            count++;
        }
    }
    if(count==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}