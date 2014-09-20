#include <stdio.h>
#include <stdlib.h>

//1: Multiples of 3 and 5
int problem1() {
  int sum = 0;
  int i;
  for(i=0; i<1000; i++) {
    if(i%3==0 || i%5==0) {
      sum+=i;
    }
  }
  return sum;
}

//2: Even Fibonacci numbers
int problem2() {
  int sum = 0;
  int fib1 = 0;
  int fib2 = 1;
  int fib3 = 1;
  while(fib1 < 4000000) {
    if(fib1%2==0) {
      sum+=fib1;
    }
    fib1 = fib2;
    fib2 = fib3;
    fib3 = fib1 + fib2;
  }
  return sum;
}

//3: Largest prime factor
long problem3(long n) {
  long x = 2;
  while(x*x < n) {
    if(n%x==0) {
      int xprime = problem3(x);
      int nxprime = problem3(n/x);
      return xprime>nxprime ? xprime : nxprime;
    }
    x++;
  }
  return n;
}

//4: Largest palindrome product
int reverseint(int n,int r) {
  if(n<10) {return r+n;}
  return reverseint(n/10, ((n%10)+r)*10);
}
int isPalindrome(int n) {
  return n==reverseint(n,0);
}
int checkprods(int n) {
  int x = n/2 + n%2;
  int y = n/2;
  while (x<1000 && y>0) {
    if(isPalindrome(x*y)) {
      return x*y;
    }
    x++;
    y--;
  }
  return 0;
}
int problem4() {
  int sum = 999 + 999;
  int r = 0;
  while(!r) {
    r=checkprods(sum);
    sum--;
  }
  return r;
}

int main() {
  printf("Problem 1: %d\n",problem1());
  printf("Problem 2: %d\n",problem2());
  printf("Problem 3: %ld\n",problem3(600851475143));
  printf("Problem 4: %d\n",problem4());
  return 0;
}
