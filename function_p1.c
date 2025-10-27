#include<stdio.h>
char char_to_ascii(char x){
    int d;
    if(x>='a'&&x<='z'){
    d=x-32;
    }
    else{
    d=x+32;
    }
return d;

}
int main()
{
    char s;
    scanf("%c",&s);
    int d=char_to_ascii(s);
    printf("%c",d);
    
    return 0;
}