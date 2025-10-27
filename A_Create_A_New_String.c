#include<stdio.h>
#include<string.h>
int main()
{
    
    char s1[1001];
    char s2[1001];
    scanf("%s%s",s1,s2);
    int len1=0;
    int len2=0;
    int i=0;
    while(s1[i]!='\0'){
        len1++;
        i++;
    }
    int j=0;
    while(s2[j]!='\0'){
        len2++;
        j++;
    }
    printf("%d %d\n",len1,len2);
    printf("%s %s",s1,s2);
    return 0;
}