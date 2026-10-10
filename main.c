#include <stdio.h>

int double_array(int *a, int len) {
  for (int i = 0; i < len; i++) {
    a[i] *= 2;
  }
}

int main(void) {
  int arr[4] = {2, 3, 5, 9};

  double_array(arr, 4);

  for (int i = 0; i < 4; i++) {
    printf("%d \n", arr[i]);
  }
}