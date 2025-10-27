//pass by referance:on this case main function and subfunction same variable memory address is not differnt
//and we can change the value of that same variable by changing that variable value in subfunction.
#include<stdio.h>
int fun(int *x){
    *x=100;
    return x;
}
int main()
{
    int x=10;
    printf("%d\n",x);
    int d=fun(&x);
    printf("%d",x);
    return 0;
}
// here we can change the value of x of main function by using that memory address and that is the main use of pass by referance.