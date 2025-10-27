#include<stdio.h>
#include<string.h>
int is_palindrome(char*s){
    int len=strlen(s);
for(int i=0;i<len;i++){
if(s[i]!=s[(len-1)-i]){
    return 0;
}
else{
    return 1;
}
}
}
int main()
{
    char s[100];
    scanf("%s",s);
 int d=is_palindrome(s);
 printf("%d",d);
    return 0;
}