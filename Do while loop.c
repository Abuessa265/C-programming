#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,n;
    scanf("%d",&n);
    do{
            f3=f2+f1;
       printf("%d",f3);
       f1=f2;
       f2=f3;
       n--;
    }
       while(n>0);
       return 0;
}
