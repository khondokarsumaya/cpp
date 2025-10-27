#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int count_c=0,count_s=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            count_c++;
        }
        else
         {
            count_s++;
        }
        i++;
    }
    printf("%d %d",count_c,count_s);

    
    return 0;
}