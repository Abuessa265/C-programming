#include<Stdio.h>
int main()
{
    int num1,num2;
    printf("Enter tow number from your keyboard");
    scanf("%d %d",&num1,&num2);
    if(num1>=num2)
    {
        if(num1==num2)
        {
            printf("The result is %d = %d",num1,num2);
        }
        else
        {
            printf("The result is %d > %d",num1,num2);
        }
    }
    else
    {
        printf("The result is %d < %d",num1,num2);

    }
    return 0;
}
