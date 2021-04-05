#include<stdio.h>
int main ()
{
    int x,y,res;
    printf("enter the value of x&y");
    scanf("%d%d",&x,&y);
    res = y<<x;
    printf("result is %d",res);
    return 0;
}
