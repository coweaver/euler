#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//Problem 6
int main(){
  int current = 100;
  int sum = 0;
  int square = 0;

  while (current > 0){
    sum += current * current;
    current--;
  }

  current = 100;
  
  while (current >0){
    square += current;
    current--;
  }

  int answer = square * square - sum;
  printf("Answer: %d \n", answer);
  return 0;
  
}
  
