#include<stdio.h>
int main(){
int n, row, col, m;
scanf("%d", &n);
m = (n%2)?n/2 + 1 : n/2;
for(row = 1; row<=n; row++){
for(col = 1; col<= n*2 ; col++){
if(row==1 && col == n)
printf("*");
else if(row>1 && (col == n-row+1|| col == n+row-1))
printf("*");
else if(row == m && (col>n-row+1 && col<n+row))
printf("*");
else
printf(" ");
}
printf("\n");
}


    //------------------------

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

