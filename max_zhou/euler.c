#include <stdio.h>
#include <stdlib.h>

//problem 5



int sumsqdiff(){
  long sumsquares;
  long squaresums;
  int i;
  for(i = 1; i < 101; i++){
    sumsquares+= i * i;
    squaresums += i;
  }
  
  squaresums = squaresums * squaresums;
  printf("Sum of squares: %d\n", sumsquares);
  printf("Square of sums: %d\n", squaresums);
  printf("Difference between sum of squares and square of sums: %d\n", sumsquares-squaresums);

  return sumsquares-squaresums;
}

//problem 1
int threefive(){
  int i;
  int sum;
  for(i = 1; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum+=i;
    }
  }
  printf("Sum of all the multiples of 3 or 5 below 1000: %d\n", sum);
}

int main(){
  // printf("Difference between sum of squares and square of sums: %d\n", sumsqdiff());
  sumsqdiff();
  threefive();
  return 0;
}
