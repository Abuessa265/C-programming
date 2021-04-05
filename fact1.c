#include<stdio.h>
int main()
{
    int n,i,j,fact=1,sum=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
            fact=1;
    for(i=1;i<=j;i++){
            fact=fact*i;
    }
    sum=sum+(j/fact);
    }
    printf("series is %d",sum);
    return 0;
}
