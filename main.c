#include <stdio.h>
#include <string.h>

int mystr_len(char *s) {
  int count = 0;

  while (s[count] != '\0') {
    count++;
  }

  return count;
}

int main(void) {
  char t[] = "Hello!";

  printf("%d\n", mystr_len(t));
}