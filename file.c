#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("sum.text","r");
int a,b;
fscanf(fptr ,"%d",&a);
fscanf( fptr ,"%d",&b);
fclose(fptr);
fptr = fopen("sum.text","w");
fprintf(fptr,"%d",a+b);


fclose(fptr);
return 0;
}