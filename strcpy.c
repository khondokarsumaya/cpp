#include<stdio.h>
#include<string.h>
int main(){

    char s1[100]="country";
    char s2[100]="Bangladesh";
    int i;
    //s2="Bangladesh";

    for(i=0;i<strlen(s1);i++){
        s2[i]=s1[i];
    }
    s2[i]='\0';

    // printf("s2 = %s\n",s2);

    //strcpy(s2,s1);

    printf("%s",s2);


}