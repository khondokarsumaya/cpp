#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count=1;
    if(row!=col){
        printf("not scalar");
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                if(a[i][j]!=1)
                {count=0;

                }
            }
           else if(a[i][j]!=0){
                count=0;
            }
        }
    }
    if(count==0){
        printf("not scalar\n");
    }
    else{
        printf("scalar\n");
    }
    return 0;
}