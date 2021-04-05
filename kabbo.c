#include<stdio.h>
int main()
{
    int n,m,sum=0,digit=0,first=0,rev=0,last;
    scanf("%d",&n);
    first=n%10;
    m=n;
    while(n>0){
            last=n%10;
          sum=sum+last;
          rev=rev*10+last;
          n=n/10;
          digit++;
    }
    int sum_two_digit=first+last;
    if(m=rev)
        printf("%d is palindrome number\n",m);
    else
        printf("%d is not palindrome number\n",m);
        printf("first & last digit is %d\n",sum_two_digit);
        printf("total digit %d\n",digit);
        printf("digit sum %d\n",sum);
        printf("reverse is %d\n",rev);
        return 0;
}
