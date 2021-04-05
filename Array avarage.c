#include<stdio.h>
int main()
{
    int avg=0,sum=0,x=0,num=0;

    for(x=0;x<4;x++)
    {
        printf("Enter Number %d",(x+1));
        scanf("%d",&num[x]);
    }
    for(x=0;x<4;x++)
    {
        sum=sum+num[x];
    }
    avg=sum/4;
    printf("Average of enter number is %d",avg);
    return 0;
}
