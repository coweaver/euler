#include <stdio.h>
#include <stdlib.h>

int num = 999;
int sum = 0;

int main(){
  printf("%s%d\n\n","Sum of the multiples of 3 and 5 below 1000: ",Multiples());
  printf("%s%d\n","The smallest positive number that is evenly divisble by all the numbers from 1 to 20 is: ",Smallest());
  return 0;
}

int Multiples(){

  while(num){
    if (!(num % 3) || !(num % 5)){
      sum += num;
    }
    num--;
  }
  return sum;
}

int Smallest(){
  num = 20;
  int check = 19;
  while(check>10){
    if (!(num % check)){
	check -=1;
      }else{
      num += 20;
      check = 19;
    }
  }return num;
  
}
