#include <stdio.h>

int main()
{

long long int n = 2;
long long int num = 0,c = 0;
float check = 0.0;


printf ("Enter a number: ");
scanf ("%lld", &num);

//do
  for (n; num != 1; n++){
  if ((int)num % (int)n == 0) {
    printf ("%lld \n", n);
    num = num/n;
    printf ("Remain: %lld \n", num);
    n = 1;
    //printf ("Keep %d\n", num);
  }
  else if (num < n) {
    printf ("Checking: %lld \n", n);
    n = 2;
  }

} //while (check != (float)1.0);
return 0;
}
