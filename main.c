#include <stdio.h>
#include <string.h>

struct car {
  char *name;
  float price;
  int speed;
};

int main(void) {
  struct car saturn = {"Saturn S", 16000.99, 30};

  printf("Name:  %s\n", saturn.name);
  printf("Price:  %f\n", saturn.price);
  printf("Speed:  %d\n", saturn.speed);
}