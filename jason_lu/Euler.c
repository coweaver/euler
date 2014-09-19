#include <stdio.h>
#include <stdlib.h>

int multiples35(){
  int sum = 0;
  int i = 0;
  while (i < 1000){
    if (i % 3 == 0 && i % 5 == 0){
      sum += i;
    }else if(i % 3 == 0){
      sum += i;
    }else if(i % 5 == 0){
      sum += i;
    }  
    i+=1;
  }
  return sum;
}

int yes(int a){
  int i = 3;
  while (i <= 20){
    if (a % i != 0){
      return 0;
    }
    i++;
  }
  return 1;
}
int smallestMultiple(){
  int smallest = 2520;
  while(!yes(smallest)){
    smallest +=2;
  }
  return smallest;
}

int main(){
  printf("The sum of the multiples of 3 and 5 less than 1000 is %d\n",multiples35());
  printf("The smallest number that is divisible by all numbers between 1-20 is %d\n",smallestMultiple());
}
