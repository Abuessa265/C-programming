#include<stdio.h>
int main()
{
    int x=5;

    printf("value of x is %d",x++);
    printf("value of x is %d",++x);

    x=5;
    printf("value of x is %d",++x);
    printf("value of x is %d",x++);
    return 0;
}
