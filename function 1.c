#include<stdio.h>

int sum (int a,int b)
{
   return a+b;
}


int main()
{
    int n1,n2;
    printf("Enter two number :");
    scanf("%d %d ",&n1,&n2);
    //int result = sum(n1,n2);
    printf("The sum is  : %d \n",sum(n1,n2));
}

