#include<stdio.h>
int main()
{
    double A,B,C,media;
    scanf("%lf%lf%lf",&A,&B,&C);
    media=(A/10*2)+(B/10*3)+(C/10*5);
    printf("MEDIA = %.1lf\n",media);
    return 0;
}
