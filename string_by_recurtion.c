#include<stdio.h>
int fun(char s[],int i){
    if(s[i]=='\0') return 0;
   int d= fun(s,1+i);
    return d+1;
}
int main()
{
    char s[10]="ho";
    //scanf("%s",s);
    int length=fun(s,0);
    printf("%d\n",length);
    return 0;
}