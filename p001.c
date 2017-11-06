#include <stdio.h>

int main()
{
  int count, sum = 0;

printf("Enter an upper bound: ");
scanf("%d", &count);

for (int num = 0; num < count; num++)
{
if (num % 3 == 0 || num % 5 == 0)
  {
    sum += num;
  }
}

printf ("The sum: %d \n", sum);

return 0;
}
