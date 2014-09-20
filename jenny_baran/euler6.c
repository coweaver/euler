//difference between sum of squares of 1-100 and square of sums of 1-100

#include <stdio.h>
#include <stdlib.h>

int main() {

  int count1 = 1;
  int sumsq = 0;
  int count2 = 1;
  int sum = 0;
  int sqsum = 0;
  int diff = 0;
  
  //sum of squares
  while (count1 < 101) {
    sumsq += count1*count1;
    count1++;
  }

  // square of sum
  while (count2 < 101) {
    sum += count2;
    count2++;
  }
  sqsum = sum*sum;

  diff = sqsum - sumsq;

  printf("Sum of squares of 1-100: %d\n", sumsq);
  printf("Square of sum of 1-100: %d\n", sqsum);
  printf("Difference: %d\n", diff);

}
