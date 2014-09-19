#include <stdio.h>
#include <stdlib.h>

int main(){
  long c = 0;
  long a = 1;
  long b = 1;
  long sum = 0;
  while ( b < 4000000 ){
    c = a + b;
    a = b;
    b = c;
    if ( b % 2 == 0 )
      sum += b;
  }
  printf ("Problem 2: %lu\n", sum);
}
