#include<stdio.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int count_c=0;
    int count_s=0;
    int count_sp=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'){
            count_c++;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            count_s++;
        }
        else if(s[i]==' '){
            count_sp++;
        }
        i++;

    }
    printf("Capital - %d\n",count_c);    
    printf("Small - %d\n",count_s);    
    printf("Spaces - %d",count_sp);    

    
    return 0;
}