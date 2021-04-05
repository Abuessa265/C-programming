#include<stdio.h>
int main()
{
    int marke;
    printf("enter your markes:");
    scanf("%d",&marke);
    if(100>= marke &&marke>50){
       printf("pass");

    }
   else if(marke>=40){
        printf("rate");
   }
   else{
        printf("fail");
   }
   return 0;
}
