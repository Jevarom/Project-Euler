#include <stdio.h>

int main()
{
  long fib[] = {0}, sum = 0;
  int count = 0;

  printf ("Select ceiling: ");
  scanf ("%d", &count);

  fib[0] = 0;
  fib[1] = 1;

  for (int n = 0; n < count; n++)
  {
  fib[n+2] = fib[n+1] + fib[n];
  if (fib [n+2] % 2 == 0)
    sum += fib[n+2];
  printf ("%ld ", fib[n]);
  }

printf ("Sum: %ld\n", sum);

return 0;
}
