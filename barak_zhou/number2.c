#include <stdio.h>
#include <stdlib.h>

int main() {
  int lower = 1;
  int higher = 2;
  int temp = 0;
  int result = 0;
  while (higher <= 4000000) {
    if (higher % 2 == 0) { 
      result += higher;
    }
    temp = lower + higher;
    lower = higher;
    higher = temp;
  }

  printf("The sum of the even-valued terms of the Fibonacci sequence whos values do not exceed four million is %d \n", result);
}
