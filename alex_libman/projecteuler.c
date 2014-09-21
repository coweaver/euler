#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Largest 3x3 Palindrome: %d\n",largestPalindrome());
  printf("Sum of multiples of 3 and 5: %d\n",sumOfMultiples());
  return 0;
}

int reverse(int f){
  int ans = 0;
  while (f){
    ans *= 10;
    ans += f % 10;
    f /= 10;
  }
  return ans;
}
int largestPalindrome(){
  int x, y;
  int largest = 0;
  for (x = 100; x < 1000; x++){
    for (y = 100; y < 1000; y++){
      if (x * y == reverse(x * y) && largest < x * y){
	largest = x * y;
      }
    }
  }
  return largest;
}

int sumOfMultiples(){
  int i;
  int sum = 0;
  for (i = 1; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}
