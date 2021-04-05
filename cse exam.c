#include <stdio.h>
int main()
{
  int n, a = 0, b;

  printf("enter the game score\n");
  scanf("%d", &n);

  b = n;

  while (b != 0)
  {
    a = a * 10;
    a = a + b%10;
    b = b/10;
  }

  if (n == a)
    printf("1\n");
  else
    printf("0\n");

  return 0;
}
