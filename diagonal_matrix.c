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
        printf("not diagonal");
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                continue;
            }
            if(a[i][j]!=0){
                count=0;
            }
        }
    }
    if(count==1){
        printf("diagonal\n");
    }
    else{
        printf("not diagonal\n");
    }
    
    return 0;
}