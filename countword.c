#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++){
        int val=s[i]-'a';
        count[val]++;
    }
    int val;
    for(int i=0;i<strlen(s);i++){
        int val=s[i]-'a';
        if(count[val]!=0){
            printf("%c %d\n",val+'a',count[val]);
        }
    
        count[val]=0;
    }
    
    return 0;
}