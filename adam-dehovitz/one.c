#include <stdio.h>
#include <stdlib.h>

int main (){
  int three = 3;
  int five = 5;
  int sum = 0;
  for (; three < 1000;  three +=3)
    sum +=three;
  for (; five < 1000; five +=5)
    if (five % 3 != 0)
      sum +=five;
  printf("%i",sum);
  return sum;
    }
