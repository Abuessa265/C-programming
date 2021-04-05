
#include <stdio.h>
int main ()
{
	int Date, Month, Year, Day;
	printf("Enter Date  (ddmmyyyy) :");
 scanf ("%2d%2d%4d", &Date, &Month, &Year);
	Day = Day % 7;

   switch (Day) {
      case 0:
         printf("Weekday = Tuesday");
         break;
      case 1:
         printf("Weekday = Wednesday");
         break;
      case 2:
         printf("Weekday = Thursday");
         break;
      case 3:
         printf("Weekday = Friday");
         break;
      case 4:
         printf("Weekday = Saturday");
         break;
      case 5:
         printf("Weekday = Sunday");
         break;
      case 6:
         printf("Weekday = Monday");
         break;
      default:;
         printf("Incorrect data");
   }
   return 0;
}
