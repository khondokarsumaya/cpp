#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int count=strlen(s);
    printf("%d\n",count);

int count1=0;
int i=0;
while(s[i]!='\0'){
    count1++;
    i++;
}
printf("%d\n",count1);
}