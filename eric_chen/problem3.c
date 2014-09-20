#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long x) {
   long i;
   for (i = 2; i < sqrt(x); i++) {
      if (x%i == 0) {
         return 0;
      }
   }

   return 1;
}

int main() {
   long num = 600851475143;
   int max = 2;
   int i;

   for (i = 2; i < sqrt(num); i++) {
      if (num%i == 0 && isPrime(i) && i > max) {
            max = i;
      }
   }

   printf("The Largest Prime is: %d\n", max);
   return 0;
}
