#include <stdio.h>
#include <stdlib.h>

//Euler #1
int multiples35(){
  int i;
  int sum = 0;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0 && i % 5 == 0){
      sum += i;
    } else if(i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}

//Euler #2
int evenFib(){
  int term = 1;
  int sum = 0;
  int val = fib(term);
  while(val < 4000000){    
    if(val % 2 == 0){
      sum += val;
    }
    term += 1;
    val = fib(term);
  }
  return sum;
}

int fib(int n){
  if(n == 1 || n == 2 || n == 3){
    return n;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main(){
  printf("%d\n", multiples35()); //233168
  printf("%d\n", evenFib());
}
