#include<stdio.h>
int main()
{
    int n,sum=0,digit=0,first=0,last,rev=0,m;
    scanf("%d",&n);
    first=m%10;
    m=n;
    while(n>0){
            last=%10;
    sum=sum+last;
    rev=rev*10+last;
    n=n/10;
    digit++;
    }
    int sum_two_digit=last+first;
    if(m==rev)
        printf("%d is palindrome number",m);
    else
        printf("%d is not palindrome number",m);
        printf("total digit is %d",digit);
        printf("digit sum is %d",sum);
        printf("first & last digit is %d",sum_two_digit);
        printf("reverse number is %d",rev);
        return 0:

}
