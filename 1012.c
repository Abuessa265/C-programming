#include<stdio.h>
int main()
{
    double pi=3.14159,A,B,C,a,b,c,d,e;
    printf("enter the value of your keyboard");
    scanf("%lf%lf%lf",&A,&B,&C);
    a=(A*C)/2;
    b=(pi*C*C);
    c=((A+B)/2)*C;
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf",a,b,c,d,e);
    return 0;

}
