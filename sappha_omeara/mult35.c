#include <stdio.h>
#include <stdlib.h>

int main() {

  int i = 1;
  int sum = 0;

  for (; i < 1000; i ++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  printf("%d\n", sum);
  
  return 0;

}
