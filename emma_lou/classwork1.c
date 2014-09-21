//2014.09.15 CLASSWORK (2 questions from Euler's project)

#include <stdio.h>
#include <stdlib.h>

int mult3and5(int n);
int evenFibSum(int n);

int main(){
  printf("%d\n", mult3and5(1000));
  printf("%d\n", evenFibSum(4000000));

  return 0;
}

int mult3and5(int n){
  int i;
  int sum = 0;
  for (i=0; i<n; i++){
    if (i%3 == 0 ||i%5 == 0){
      sum = sum + i;
    }
  }
  return sum;
}

int evenFibSum(int n){
  int i = 1; 
  int j = 2;
  int k = i + j;
  int sum = 2;
  int go;
  
  while (k < n){
    if (k%2 == 0){
      sum = sum + k;
    }
    i = j;
    j = k;
    k = i + j;
  }
  return sum;

}
