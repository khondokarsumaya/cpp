#include<stdio.h>
#include<string.h>

int main(){
    char s1[100]="Bamgla";
    char s2[100]="desh";
    char s3[100];
    strcpy(s3,s1);
   // strcat(s3,s2);
    //printf("%s",strcat(s3,s2));
    int n1=strlen(s1);
    int n2= strlen(s2);
    int k=n1;
    for(int i=0;i<n2;i++){
        s1[k]=s2[i];
        k++;
    }
    s1[k]='\0';
    printf("%s",s1);
}