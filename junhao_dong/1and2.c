#include <stdio.h>
#include <stdlib.h>

// Find: sum of all multiples of 3 or 5 below 1000
int problem1(){
  int sum = 0;
  int i;
  for (i=0;i<1000;i++){
    if (i%3==0 || i%5==00){
      sum+=i;
    }
  }
  printf("Sum of all multiples of 3 or 5 below 1000: %i\n", sum);
  return sum;
}

// Given: Fibonacci sequence starting with 1,2 (or 0,1)
// Find: sum of evens < 4million
int problem2(){
  long fib0 = 0;
  long fib3 = 2;
  long result = 2;
  long sum = 0;

  while (result < 4000000){
    sum += result;
    // loop through evens only (every third number)
    result = 4*fib3 + fib0;
    fib0 = fib3;
    fib3 = result;
  }
  printf("Sum of even fibs < 4mil: %lu\n",sum);
  return sum;
}

int main() {
  problem1();
  problem2();
}
