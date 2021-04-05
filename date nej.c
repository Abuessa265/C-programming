#include<stdio.h>
int main()
{
    int date,month,year,day;
    printf("enter date (ddmmyyyy)\n");
    scanf("%d2%2d%4d",&date,&month,&year);
    day = day % 7;
    switch (day) {
    case 1:
        printf("weekday = saturday");
        break;
    case 2:
        printf("weekday = sunday");
        break;
    case 3:
        printf("weekday = monday");
        break;
    case 4:
        printf("weekday = tuesday");
        break;
    case 5:
        printf("weekday = wednesday");
        break;
    case 6:
        printf("weekday = thursday");
        break;
    case 7:
        printf("weekday = friday");
        break;
    default:;
        printf("imcorrect data");
    }
   return 0;

}
