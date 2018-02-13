#include <stdio.h>

int main() {
//Sum square difference\

int number = 0, count = 0;
int sum_squares = 0, sums = 0, square_sums = 0;
int diff = 0;

printf("What number N should the sum-square difference be? ");
scanf("%d",&number);
printf("Number selected: %d\n", number);
for (count = 1; count <= number; count++) {
  sum_squares += count*count;

  sums += count;
}

square_sums = sums*sums;
printf("The sum of squares: %d\n", sum_squares);
printf("The square of sums: %d\n",square_sums);

diff = square_sums - sum_squares;

printf("The difference between the sum of squares & square of sums: %d\n", diff);

return 0;
}
