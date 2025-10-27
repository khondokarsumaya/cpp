#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char s[50];
    fgets(str,50,stdin);
    int i,len=strlen(str);
    for(int i=len-1;i>=0;i--){
    s[i]=str[i];
    }
    printf("%s",s);

}