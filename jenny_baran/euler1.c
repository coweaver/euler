//add mults of 3 & 5 to 1000

#include <stdio.h>
#include <stdlib.h>

int main() {

  int where = 1;
  int sum = 0;

  while (where < 1000) {
    if (! (where % 3)) {
      sum += where;
    }
    else if (! (where % 5)) {
      sum += where;
    }
    where++;
  }

  printf("The sum of the multiples of 3 and the multiples of 5 under 1000 is %d.\n", sum);
  return 1;

}
