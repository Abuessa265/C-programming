#include<stdio.h>
int big(int a,int b)
{
    if(a>b){
    printf("The bigger number is : %d",a);

}
else{
    printf("The bigger number is : %d",b);
}
    return big;
}

int main()
{
    int a,b;
    int bigger=0;
    printf("Enter two number :");
    scanf("%d %d ",&a,&b);
    bigger=big(a,b);

    return 0;
}
