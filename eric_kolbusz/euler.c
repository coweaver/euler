#include <stdlib.h>
#include <stdio.h>

int problem1() {
  //If we list all the natural numbers below 10 that are multiples of 3 or 5,
  //we get 3, 5, 6 and 9. The sum of these multiples is 23.
  
  //Find the sum of all the multiples of 3 or 5 below 1000.
  int sum = 0;
  int i;
  for (i=1;i<1000;i++) {
    if (!(i%3) || !(i%5)) {
      sum = sum+i;
    }
  }
  return sum;
}

int problem9() {
  // A Pythagorean triplet is a set of three natural numbers, a < b < c, 
  //for which, a2 + b2 = c2
  //For example, 32 + 42 = 9 + 16 = 25 = 52.

  //There exists exactly one Pythagorean triplet for which a + b + c = 1000.
  //Find the product abc.
  int a;
  for (a=1;a<999;a++) {
    int b;
    for (b=1;b<998;b++) {
      int c = 1000-(a+b);
      if ((a*a)+(b*b)==(c*c)) {
    return a*b*c;
      }
    }
  }
}

int main() {
  printf("Problem 1 solution: %d\n",problem1());
  printf("Problem 9 solution: %d\n",problem9());
  return 0;
}
