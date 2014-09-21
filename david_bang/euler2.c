#include <stdio.h>
#include <stdlib.h>
//problem 2

int main() {
  int sum = 0, x = 0, f1 = 0, f2 = 1;
  while (f2 < 4000000) {
    if (f2 % 2 == 0) 
      sum = sum + f2;
    x = f2;
    f2 = f2 + f1;
    f1 = x;
   }
  printf ("%d\n", sum);
  return 0;
}
