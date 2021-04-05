#include<stdio.h>
int main()
{
    int dd,mm,yyyy,total,days;
    printf("enter the value of :",mm,dd,yyyy);
    scanf("%2d%2d%4d",&dd,&mm,&yyyy);
    if(mm>12) days=366;
    else if(mm>11) days=335;
    else if(mm>10) days=305;
    else if(mm>9) days=274;
    else if(mm>8) days=244;
    else if(mm>7) days=213;
    else if(mm>6) days=182;
    else if(mm>5) days=152;
    else if(mm>4) days=121;
    else if(mm>3) days=91;
    else if(mm>2) days=60;
    else if(mm>1) days=31;

    total=dd+days;
    switch(total%7)
    {
       case 6:
        printf("tuesday");
        break;
    case 0:
        printf("wednesday");
        break;
    case 1:
        printf("thursday");
        break;
    case 2:
        printf("friday");
        break;
    case 3:
        printf("saturday");
        break;
    case 4:
        printf("sunday");
        break;
    case 5:
        printf("monday");
        break;
    }
    return 0;
}
