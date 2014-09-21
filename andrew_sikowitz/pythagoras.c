#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int a,b,c;
  char valid = 0;

  for (a=0; a<1000 && !valid; a++) {
    for (b=0; b<a && a+b<1000 && !valid; b++) {
      c = 1000 - a - b;
      if (a*a+b*b == c*c) {
	valid = 1;
	a--;
	b--;
      }
    }
  }
  printf("a: %d, b: %d, c: %d; abc: %d\n",a,b,c,a*b*c);
  return a*b*c;
}
