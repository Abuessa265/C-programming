#include<stdio.h>
int main(){
   int hours,minutes,seconds,N;
   scanf("%d", &N);

   hours = N / 3600;
   N=N%3600;
   minutes = N/60;
   N=N%60;
   seconds = N;
   printf("%d:%d:%d\n", hours, minutes, seconds);
   return 0;
}


