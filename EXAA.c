#include<stdio.h>
int main()
{

 int n=5,row,col;
 for(row=1; row<=n; row++)
 {
   if(row%2==0)
      printf("*");
   else if(row%3==0)
   {
      for(col=1; col<=row; col++)
          printf("*");
   }
   else
   {
      for(col=1; col<=n; col++)
          printf("*");
   }
   printf("\n");
 }
 getch();
 return 0;
}
