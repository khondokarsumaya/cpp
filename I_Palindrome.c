#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int pldm=1;
    int len=strlen(s);
    int i=0;
    for(int i=0;i<len;i++){
    if(s[i]!=s[len-i-1]){
        pldm=0;
    }
    }
    if(pldm==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}