#include <stdio.h>
#include <stdlib.h>



int mults3and5() {
  int sum = 0;
  int i;
  for (i=0;i<1000;i++) {
    if (!(i%3) || !(i%5)) {
      sum+=i;
    }
  }
  return sum;
}

int fibstuff () {
  int low = 1;
  int high  = 1;
  int x = 0;
  int sum = 0;
  while (low+high < 4000000) {
    x = low + high;
    if (x%2 == 0) {
      sum = sum + x;
    }
    low = high;
    high = x;
  }
  return sum;
}


int main() {
  printf("sum of multiples between 3 and 5 below 1000:\n %d\n",mults3and5());
  printf("sum of the even valued terms in the Fibonacci sequence whose values don't exceed four million:\n  %d\n",fibstuff());
  return 0;
}
