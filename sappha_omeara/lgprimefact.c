#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long n){
	long m;
   	for (m = 2; m < sqrt(n); m ++) {
   		if (n % m == 0) {//not prime
        return 0;
      }
   }
   return 1;
}

int main() {
	long num = 600851475143;
	int i = 2;
	int largest = -1;
	
	for (; i < sqrt(num); i ++){
		if (num % i == 0 && isPrime(i) && i > largest){
	      largest = i;
	    }
	}

	printf("%d\n", largest);
	
	return 0;
}
