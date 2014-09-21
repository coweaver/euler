#include <stdio.h>
#include <stdlib.h>

int main() {
  int smaller = 2;
  long larger = 600851475143;
  while (smaller<larger) {
    if (larger % smaller == 0) {
      larger = larger/smaller;
      smaller = 2;
    }
    else{
      smaller++;
    }
  }
  printf("%ld \n", larger);
}
