#include <stdio.h>
#include <stdlib.h>

//problem 1

int main() {
  int sum;
  int x;
  for ( x = 0; x < 1000; x++ ) {
    if (x % 3 == 0 || x % 5 == 0)
      sum = sum + x;
  }
  printf ("%d\n", sum);
}
    
