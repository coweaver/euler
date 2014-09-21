#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int sum = 0;

  int i = 0;
  while(i-1000){
    if (!(i%3) || !(i%5)){
      sum+=i;
    }
    i++;
  }

  printf("Sum of all multiples of 3 or 5 below 1000: %d\n",sum);

}
