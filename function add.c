#include<stdio.h>

int add(int ,int);
int main()
{
    int a,i=20,j=40;
   a=add(i,j);
   printf("sum = %d",a);
}
int add(int e,int r)
{
    int sum;
    sum=e+r;
    return sum;
}
