#include <stdio.h>
#include <stdlib.h>

int main(){
  long x = 0;
  int i;
  for (i = 1; i <= 1000; i++){
    if ( i % 3 == 0 || i % 5 == 0)
      x += i;
  }

  printf("Problem 1: %lu\n", x);

}

