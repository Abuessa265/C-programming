#include<stdio.h>
int main()
{
int a=5,b=6,c=7;
b=++c;
a=b++;
c=++a;
printf("value of a is %d\n b is %d\n c is %d\n",a,b,c);
return 0;
}
