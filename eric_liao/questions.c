#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,sum=0;
  for (i=0;i<1000;i++){
    if (i%3==0 ||i%5==0){
      sum+=i;
    }
  }
  printf("Answer for number 1:%d\n",sum);

  int fib1=1,fib2=1,temp,sumforquestionnumber2=0;
  while (fib2<4000000){
    if (fib2%2==0){
      sumforquestionnumber2+=fib2;
    }
    temp = fib1+fib2;
    fib1=fib2;
    fib2=temp;
  }
  printf("Answer for number 2:%d\n",sumforquestionnumber2);

  return 0;
}
