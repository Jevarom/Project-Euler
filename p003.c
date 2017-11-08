#include <stdio.h>

int main()
{

int n = 2, num = 0,c = 0;
float check = 0.0;


printf ("Enter a number: ");
scanf ("%d", &num);

//do
  for (n; num != n; n++){
  if (num % n == 0) {
    printf ("%d \n", n);
    num = num/n;
  }
  else if (num % n != 0) {

  }

} //while (check != (float)1.0);
return 0;
}
