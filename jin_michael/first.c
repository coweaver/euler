#include <stdio.h>
#include <stdlib.h>

int main(){
  long sum=0;
  
  int x;

  for(x=3;x<=1000;x++){
    if (x%3==0 || x%5==0)
      sum+=x;
  }
  printf("The sum of all the multiples of 3 or 5 below 1000 is: %lu\n",sum);
  
  sum=0;
  
  int a=0;
  int b=1;
  
  for(x=a+b;x<=4000000;x=a+b){
    if (x%2==0)
      sum+=x;
    a=b;
    b=x;
  }

  printf("The sum of the even-valued term of the fibonacci sequence up to 4,000,000 is: %lu\n",sum);
  return 0;
}
