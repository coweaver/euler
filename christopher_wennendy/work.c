#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum;
  int counter3;
  int counter5;

  sum = 0;

  for (counter3 = 0; counter3 < 1000; counter3 += 3){
    sum += counter3; }
  for (counter5 = 0; counter5 < 1000; counter5 += 5){
    if (counter5 % 3 != 0)
      sum += counter5; }
  printf("%d\n" , sum);

  int sum2;
  int counter1;
  int counter2;

  sum2 = 0;
  
  counter1 = 1;
  while(counter2 < 4000000 || counter1 < 4000000){
    if (counter2 > counter1){
      if (counter2 % 2 == 0)
	sum2 += counter2;
      counter1 += counter2; }
    else{
      if (counter1 % 2 == 0)
	sum2 += counter1;
      counter2 += counter1; }
  }

  printf("%d\n" , sum2);
  return 0;
}
