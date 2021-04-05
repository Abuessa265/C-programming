#include<stdio.h>
int main()
{
    int a,b,diff;
    printf("enter the value of your keyboard");
    scanf("%d%d",&a,&b);
    if (a>b)
        diff = a-b;
    else
        diff = b-a;
        printf("diff is %d\n",diff);


    return 0;
}
