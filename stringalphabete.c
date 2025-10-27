#include<stdio.h>
#include<string.h>
int main(){
int n;
scanf("%d",&n);
char s[n+1];
scanf("%s",s);
for(int i=0;i<n;i++){
    if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    else{
        s[i]=s[i]+32;
}
printf("%s",s);

}
