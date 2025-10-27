#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){

char s[100];
scanf("%s",s);
int d=0;
for(int i=1;i<=strlen(s);i++){
    if(s[i]=='_'){
        d+=2;
    }
    else if(s[i]=='^'&&s[i+1]=='_'&&s[i+3]=='\0'){
        d++;
    }
     else if(s[i]!='^'&&s[i+1]!='_'&&s[i+2]!='^'||s[i]!='^'&&s[i+1]!='^'){
        {
            if(s[i]=='^')
            d+=2;
            else
            d++;
        }
     }
    }

printf("%d\n",d);
    }

    }