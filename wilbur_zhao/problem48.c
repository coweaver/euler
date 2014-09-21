#include <stdlib.h>
#include <stdio.h>

long last10digits(int n){
  
  long last10 = 1;
  
  int i = 0;
  for(i;i < n;i++){
    last10 *= n;
    last10 = last10%10000000000;
    //printf("%ld\n",last10);
  }

  return last10;

}

int main(){

  int i = 1;
  long last10 = 0;
  
  last10digits(15);
  //printf("%ld",last10digits(1));

  while (i - 1001){
    last10 += last10digits(i);
    last10 = last10 % 10000000000;
    i++;    
  }

  printf("Last 10 digits of 1^1 + 2^2 + 3^3 + ... + 1000^1000: %ld\n",last10);
  
}
