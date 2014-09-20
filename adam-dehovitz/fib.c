#include <stdio.h>
#include <stdlib.h>

int main (){
  int a = 1;
  int b = 1;
  int sum = 0;
  int c;
  while (a < 4000000){
    c = a;
    a = a + b;
    b = c;
    if (a % 2 == 0)
      sum+= a;
  }
  printf("%i",sum);
  return sum;
}
