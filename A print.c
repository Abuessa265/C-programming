#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the value of your keyboard ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==1 ||row==4 || col==1|| col==n)
                printf("*");
             else
                printf(" ");
        }
        printf("\n");
    }
}
