#include <stdio.h>

#define MAXCHAR 1000
int main () {
  FILE *fp;
  char str[MAXCHAR];
  char* filename = "p008.txt";
  char sum = 0;

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Could not open file %s\n",filename);
    return 1;
  }
  while (fgets(str, MAXCHAR, fp) != NULL)
    printf("%s", str);
  fclose(fp);

  for (int i = 0; i < 3; i++) {
    printf ("%c\n",str[i]);
    sum = sum + str[i];
    //Reorganize the characters
    //Why did calculating with c vs s?
  }
  printf ("Sum: %c\n", sum);
  return 0;
}

/*
int filecheck (int a, int b) {

  return b;
}
*/
