#include<stdio.h>

double triangleArea(double b,double h);
int main()
{
    double base,hight;

    printf("Enter base :");
    scanf("%lf",&base);

    printf("Enter hight :");
    scanf("%lf",&hight);

    double area =triangleArea(base,hight);
    printf("Area = %.lf\n",area);
}
double triangleArea(double b,double h)
{
    return 0.5*b*h;
}
