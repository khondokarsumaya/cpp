#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    //fgets(s,1000001,stdin);
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        else if(s[i]==','){
            s[i]=' ';
        }
    
    }
    printf("%s",s);
    
    return 0;
}