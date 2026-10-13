#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp;
  int c;

  fp = fopen("hello.txt", "r");

  while ((c = fgetc(fp)) != EOF)
    printf("%c", c);

  fclose(fp);
}
