#include<stdio.h>
int main(){
int n, i, j, m;
scanf("%d", &n);
m = (n%2)?n/2 + 1 : n/2;
for(i = 1; i<=n; i++){
for(j = 1; j<= n*2 ; j++){
if(i==1 && j == n)
printf("*");
else if(i>1 && (j == n-i+1|| j == n+i-1))
printf("*");
else if(i == m && (j>n-i+1 && j<n+i))
printf("*");
else
printf(" ");
}
printf("\n");
}


    //------------------------

for(i=1; i<=n; i++)
 {
   if(i%2==0)
      printf("*");
   else if(i%3==0)
   {
      for(j=1; j<=i; j++)
          printf("*");
   }
   else
   {
      for(j=1; j<=n; j++)
          printf("*");
   }
   printf("\n");
 }
 getch();
 return 0;
}

