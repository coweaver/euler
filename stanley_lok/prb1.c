#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//Problem 1 
multiple(int i){
  int current = 0;
  int count = 0;
  
  for(current; current < i; current++){
    if( current % 3 == 0 || current % 5 == 0){
      count+=current;
    }
  }
  
  printf("Ans: %d \n", count);
}
 
int main(){

  multiple(1000);
  return 0;
}
