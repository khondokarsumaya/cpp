#include<stdio.h>
int main()
{  

    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y,z;
        scanf("%d%d%d%d",&n,&x,&y,&z);
        int d=n-(x+y+z);
        printf("%d\n",d);
        
    }

    
    return 0;
}
    