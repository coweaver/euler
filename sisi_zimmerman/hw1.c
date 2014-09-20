#include <stdio.h>
#include <stdlib.h>

int main(){

  int i;
  int count = 0;
  for (i = 1; i <1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      count += i;
    }
  }
  printf("Problem 1 (multiples of 3 and 5): %d \n" , count);

  int a = 1;
  int b = 1;
  count = 0;
  while( b < 4000000 ){
    if (b % 2 == 0){
      count += b;
    }
    int c = a;
    a = b;
    b = a + c;
  }
  printf("Problem 2 (even fibonacci numbers): %d \n" , count);

  return 0;
}
