#include<stdio.h>
int main()
{
    float i,avg,sum=0;
    for(i=0;i<=10;i++){
    sum=sum+i;
    }
    avg=sum/10;
    printf("The avg number is %f",avg);
    return 0;
}
