#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    printf("%d",count);