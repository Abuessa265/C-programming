#include<stdio.h>
int main()
{
    int i,sum=0,p=0;
    for(i=1;i<=4;i++,p++){
    sum=sum+i*pow(2,p);
    }
    printf("The sum of series is %d",sum);
    return 0;

}
