//add even fibonaccis to 4mil

#include <stdio.h>
#include <stdlib.h>

int main() {

  int count = 0;
  int lo = 1;
  int hi = 1;
  int sum = 2;

  while ( sum < 4000000 ) {
    if (! (sum % 2)) {
      count += sum;
    }
    lo = hi;
    hi = sum;
    sum = lo + hi;
  }

  printf("The sum of the even fibonacci numbers below 4 million is %d.\n", count);
  return 1;

}
