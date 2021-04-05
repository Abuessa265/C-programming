#include<stdio.h>

int square(int x)
{
    int y;
    y=x*x;
    return y;
}
int main()
{
    int a, sq;
    printf("Enter any key :");
    scanf("%d",&a);

    sq=square(a);

    printf("The square of %d is :%d\n",a,sq);
}
