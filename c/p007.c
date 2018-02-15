#include <stdio.h>
#include <time.h>

int main() {
//List of prime numbers
int position = 0, prime = 0, temp = 0;

clock_t begin = clock();

printf("Select the position of prime number: ");
scanf("%d", &position);

for (int i = 1; i <= position; i++) {
  printf("POS %d\n",i );
  if (i == 1) {
    temp = 2;
    printf("Case1: %d\n",temp);
  }
  else if (i == 2) {
    temp = 3;
    printf("Case2: %d\n",temp);
  }
//Need to find a better way to toggle between the prime factor eq.
  else if (i > 2) {
    for (int n = 1; n <= position - i; n++) {
      temp = 6*n - 1;
      printf("POSf1 %d = %d\n",i,temp);
      i++;
      if (i % 2 == 0) {
        temp = 6*n + 1;
        printf("POSf2 %d = %d\n",i,temp);
        i++;
      }
      printf("What is n? %d\n",n);
    }

  }
  else {
    printf ("Not a valid choice!\n");
    break;
  }

  prime = temp;
}

printf("The %dth prime number is %d\n",position, prime);

clock_t end  = clock();
double time_spent = (double)(end - begin)/CLOCKS_PER_SEC;
printf("Time: %f\n", time_spent);

return 0;
}
