#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 1000;
  int i, sum = 0;
  for (i=0; i<n; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }
  printf("Your sum is: %d\n", sum);
  return sum;
}
